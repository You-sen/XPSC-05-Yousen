#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    string s;
    cin>>s;
    char r=s[0],c=s[1];
    for(int i=1;i<=8;i++){
        if(i==c-'0')continue;
        cout<<r<<i<<endl;
    }
    for(char i='a';i<='h';i++){
        if(i==r)continue;
        cout<<i<<c<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}