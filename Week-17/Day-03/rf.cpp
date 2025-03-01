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
    int even=0,ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0)even++;
        if(v[i]%k==0)ans=0;
        ans=min(ans,k-(v[i]%k));
    }
    if(k==4){
        if(even>=2)ans=0;
        else if(even==1)ans=min(ans,1);
        else ans=min(ans,2);
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}