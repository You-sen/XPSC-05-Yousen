#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n),waiting,ans(n,0);
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
    }
    for(auto x:mp){
        if(x.second.size()>=k){
            for(int i=0;i<k;i++){
                ans[x.second[i]]=i+1;
            }
        }
        else{
            for(int i=0;i<x.second.size();i++){
                waiting.push_back(x.second[i]);
            }
        }
    }
    int len=waiting.size()-((waiting.size())%k);
    for(int i=0;i<len;i++){
        ans[waiting[i]]=(i%k)+1;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}