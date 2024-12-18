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
    int size=s.size();
    int ones=0,zeros=0;
    for(int i=0;i<size;i++){
        if(s[i]=='1')ones++;
        else zeros++;
    }
    string t;
    int tsize=ones+zeros;
    for(int i=0;i<tsize;i++){
        if(s[i]=='1'&&zeros){
            t+='0';
            zeros--;
        }
        else if(s[i]=='0'&&ones){
            t+='1';
            ones--;
        }
    }
    int matched=0;
    tsize=t.size();
    for(int i=0;i<tsize;i++){
        if(s[i]!=t[i])matched++;
        else break;
    }
    cout<<size-matched<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}