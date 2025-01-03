#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,q;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cin>>q;
    while(q--){
        ll x;
        cin>>x;
        int l=0,r=n-1,mid;
        int ans1=0,ans2=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(v[mid]<x){
                ans1=v[mid];
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        l=0,r=n-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(v[mid]>x){
                ans2=v[mid];
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(ans1!=0)cout<<ans1<<" ";
        else cout<<"X"<<" ";
        if(ans2!=0)cout<<ans2<<endl;
        else cout<<"X"<<endl;
    }
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}