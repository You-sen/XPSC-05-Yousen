#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    vector<int>l(n,0),r(n,0);
    for(int i=1;i<n;i++){
        int prevI=i-1;
        int left= prevI==0?INT_MAX:v[prevI]-v[prevI-1];
        int right= prevI+1==n?INT_MAX:v[prevI+1]-v[prevI];
        r[i]=r[i-1]+(right<left?1:v[i]-v[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        int nextI=i+1;
        int left= nextI==0?INT_MAX:v[nextI]-v[nextI-1];
        int right= nextI+1==n?INT_MAX:v[nextI+1]-v[nextI];
        l[i]=l[i+1]+(right>left?1:v[i+1]-v[i]);
    }
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        if(x<y)cout<<r[y]-r[x]<<endl;
        else cout<<l[y]-l[x]<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}