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
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x%=10;
        mp[x]++;
        if(mp[x]<=3)v.push_back(x);
    }
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            for(int k=j+1;k<v.size();k++){
                if((v[i]+v[j]+v[k])%10==3){
                    yes return;
                }
            }
        }
    }
    no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}