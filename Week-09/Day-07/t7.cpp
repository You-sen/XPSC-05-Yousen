#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll l,r;
    cin>>l>>r;
    ll range=((r-l)/2)+1;
    yes
    for(ll i=0;i<range;i++){
        cout<<l+(i*2)<<" "<<l+(i*2)+1<<endl;
    }
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}