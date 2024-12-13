#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
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
    cout<<A<<" "<<B<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
//TLE
/*
int min=INT_MAX;
for(ll i=0;i<=x/2;i++){
        ll XOR=i^x;
        if(XOR>=i&&XOR>=0&&XOR<=x){
            if((XOR-i)<min){
                min=XOR-i;
                A=i;
                B=XOR;
            }
        }
    }
*/