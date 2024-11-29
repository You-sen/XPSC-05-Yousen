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
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    while(!mp.empty()){
        string modified="";
        for(auto it=mp.begin();it!=mp.end();){
            modified+=it->first;
            it->second--;
            if(it->second==0){
                it=mp.erase(it);
            }
            else{
                it++;
            }
        }cout<<modified;
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}