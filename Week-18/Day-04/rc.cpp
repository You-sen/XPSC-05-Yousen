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
    string s;
    cin>>s;
    int pos=s.find("**");
    if(pos==string::npos)pos=n;
    int coins=0;
    for(int i=0;i<pos;i++){
        if(s[i]=='@')coins++;
    }
    cout<<coins<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}