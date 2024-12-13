#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll x;
    cin>>x;
    ll A=0,B=0;
    B=(1<<__lg(x));
    A=B^x;
    ll zeros=__lg(A)-__builtin_popcount(A)+1;
    cout<<(1<<zeros)<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}