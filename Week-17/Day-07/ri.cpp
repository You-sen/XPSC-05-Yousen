#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll xi=0,yi=0,st=1,en=n;
    for(ll i=1;i<=n;i++){
        if(i%x==0&&i%y==0)continue;
        if(i%x==0){
            xi+=en;
            en--;
        }
        if(i%y==0){
            yi+=st;
            st++;
        }
    }
    cout<<xi-yi<<endl;
}

void solve2(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll common=((x/__gcd(x,y))*y);
    ll xi=(n/x)-(n/common);
    ll yi=(n/y)-(n/common);
    ll left=(xi*((2*n)-xi+1))/2;
    ll right=(yi*(yi+1))/2;
    cout<<left-right<<endl;
}
int main() {
    fasterIO
    testCase
    solve2();
    return 0;
}