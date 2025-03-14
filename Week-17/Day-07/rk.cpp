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
    vector<int>v(n),ans(k,0);
    map<int,vector<int>>mp;
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]].push_back(i);
        st.insert(i);
    }
    for(int i=1;i<=k;i++){
        if(mp[i].size()==0)continue;
        ans[i-1]=2*(*st.rbegin()-*st.begin()+1);
        for(auto x:mp[i]){
            st.erase(x);
        }
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