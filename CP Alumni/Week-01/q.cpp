#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int g=__gcd(a,b);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]%=g;
    }
    sort(v.begin(),v.end());
    int ans=v[n-1]-v[0];
    for(int i=1;i<n;i++){
        ans=min(ans,(v[i-1]+g-v[i]));
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}