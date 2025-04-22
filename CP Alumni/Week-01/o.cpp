#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    if(n==2){
        if(v[0]>v[1]){
            no return;
        }
        yes return;
    }

    for(ll i=0;i<n-1;i++){
        int temp=min(v[i],v[i+1]);
        v[i]-=temp;
        v[i+1]-=temp;
    }
    if(is_sorted(v.begin(),v.end()))yes
    else no
}
int main() {
    fasterIO
    testCase
    solve();
    return 0;
}