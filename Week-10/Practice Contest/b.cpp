#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n;
    cin>>n;
    while(n>=3){
        if(n%4==0){
            yes
            return;
        }
        n-=3;
    }
    if(n)no
    else yes
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}