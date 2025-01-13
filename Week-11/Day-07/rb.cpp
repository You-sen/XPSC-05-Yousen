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
    vector<pair<int,int>>vp(n);
    vector<int>b(n),res(n);
    for(int i=0;i<n;i++){
        cin>>vp[i].first;
        vp[i].second=i;
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<n;i++)cin>>b[i];
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        res[vp[i].second]=b[i];
    }
    for(auto x:res){
        cout<<x<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}