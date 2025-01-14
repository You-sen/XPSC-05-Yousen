#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k),posV(k);
    for(ll i=0;i<k;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    posV[0]=n-v[0];
    for(ll i=1;i<k;i++){
        posV[i]=posV[i-1]+n-v[i];
    }
    ll l=0,r=k-1,mid,ans=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(posV[mid]<n){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans+1<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}