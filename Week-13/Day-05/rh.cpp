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
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int team=0;
    for(int i=2;i<=2*n;i++){
        int temp=0;
        for(auto x:mp){
            int need=i-x.first;
            if(need>0&&mp[need]!=0){
                temp+=min(x.second,mp[need]);
            }
        }
        temp/=2;
        team=max(team,temp);
    }
    cout<<team<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}