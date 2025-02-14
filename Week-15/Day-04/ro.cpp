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
    vector<ll>res(n,0);
    if(n%2!=0){
        ll j=1;
        for(ll i=1;i<n;i+=2){
            res[i]=j;
            j++;
        }
        j=1;
        for(ll i=2;i<n;i+=2){
            res[i]=j;
            j++;
        }
    }
    else{
        ll j=1;
        for(ll i=0;i<n;i+=2){
            res[i]=j;
            j++;
        }
        j=1;
        for(ll i=1;i<n;i+=2){
            res[i]=j;
            j++;
        }
    }
    if(((n+1)/2)%2!=0){
        for(ll i=0;i+2<n;i+=2){
            res[i]+=(1ll<<30);
        }
        for(ll i=2;i<n;i+=2){
            res[i]+=(1ll<<29);
        }
    }
    else{
        for(ll i=0;i<n;i+=2){
            res[i]+=(1ll<<30);
        }
    }
    for(auto x:res){
        cout<<x<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}