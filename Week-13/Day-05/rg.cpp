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
    map<char,int>mp;
    for(auto c:s)mp[c]++;
    int ud=min(mp['U'],mp['D']);
    int lr=min(mp['L'],mp['R']);
    if(min(lr,ud)==0){
        if(lr==0){
            ud=min(1,ud);
            cout<<2*ud<<endl;
            cout<<string(ud,'U')+string(ud,'D')<<endl;
        }
        else{
            lr=min(1,lr);
            cout<<2*lr<<endl;
            cout<<string(lr,'L')+string(lr,'R')<<endl;
        }
    }
    else{
        string path;
        path+=string(lr,'L');
        path+=string(ud,'U');
        path+=string(lr,'R');
        path+=string(ud,'D');
        cout<<path.size()<<endl;
        cout<<path<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}