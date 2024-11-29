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
    int len=s.size();
    string a="",b="";
    while(a.size()<2*len){
        a+="()";
    }
    while(b.size()<len)b+='(';
    while(b.size()<2*len)b+=')';
    if(a.find(s)==string::npos){
        yes cout<<a<<endl;
    }
    else if(b.find(s)==string::npos){
        yes cout<<b<<endl;
    }
    else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}