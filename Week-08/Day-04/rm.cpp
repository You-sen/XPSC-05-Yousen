#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int count=0;
    for(int i=0;i<n;i++){
        int mod=abs(i+1)-v[i];
        if(mod%k!=0)count++;
    }
    if(count==0)cout<<0<<endl;
    else if(count==2)cout<<1<<endl;
    else minus
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}