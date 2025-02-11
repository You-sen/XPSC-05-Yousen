#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<((a+b)%2==0?"Bob":"Alice")<<endl;
}
int main() {
    fasterIO
    testCase
    solve();
    return 0;
}