#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int x,y,a;
    cin>>x>>y>>a;
    if(a%(x+y)>=x)yes
    else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}