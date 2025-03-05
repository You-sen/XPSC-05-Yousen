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
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        int a,x;
        cin>>a>>x;
        mp[a].push_back(x);
    }
    int maxR=*max_element(mp[1].begin(),mp[1].end());
    int minR=*min_element(mp[2].begin(),mp[2].end());
    int notEqual=0;
    for(auto x:mp[3]){
        if(x>=maxR&&x<=minR)notEqual++;
    }
    cout<<max(0,(minR-maxR-notEqual+1))<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}