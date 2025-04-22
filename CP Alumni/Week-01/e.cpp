#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    int l=0,r=0,count=0,ans=0;
    while(r<n){
        int len=r-l+1;
        if(len*v[r]>=x){
            count++;
            l=r+1;
        }
        r++;
    }
    cout<<count<<endl;

}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}