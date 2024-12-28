#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;
ll LCM(ll a,ll b){
    return ((a/__gcd(a,b))*b); 
}
void solve(){
    ll x;
    cin>>x;
    ll a;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            if(LCM(i,x/i)==x){
                a=i;
            }
        }
    }
    cout<<a<<" "<<x/a<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}