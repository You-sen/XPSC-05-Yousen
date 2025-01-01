#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int x,y,k;
    cin>>x>>y>>k;
    int res=__gcd(x,y);
    if(k>=2){
        cout<<res*2<<endl;
    }
    else{
        cout<<min(res+x,res+y)<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}