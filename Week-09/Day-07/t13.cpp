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
    if(b==1){
        no
        return;
    }
    else{
        yes
        cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
    }

}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}