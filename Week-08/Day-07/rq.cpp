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
    for(int i=0;i<n;i++)cin>>v[i];
    if(v[n-1]!=0){
        no
        return;
    }
    yes
    vector<int>b;
    int ones=0;
    for(int i=0;i<n;i++){
        vector<int>z;
        if(v[i]==0){
            b.push_back(ones);
            ones=0;
        }
        if(v[i]==1){
            ones++;
        }
    }
    for(int i=b.size()-1;i>=0;i--){
        
        for(int j=1;j<=b[i];j++){
            cout<<0<<" ";
        }cout<<b[i]<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}