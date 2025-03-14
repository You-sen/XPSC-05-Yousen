#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(n);
    a[0]=1;
    for(int i=1;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt=0;
    while(!a.empty()){
        if(a.back()<b.back()){
            cnt++;
            b.pop_back();
        }
        a.pop_back();
    }
    cout<<n-cnt<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}