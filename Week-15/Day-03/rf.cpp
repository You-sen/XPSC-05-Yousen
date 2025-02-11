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
    vector<int>v(n),mv;
    int maxV=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        maxV=max(maxV,v[i]);
        if(maxV-v[i]!=0)
            mv.push_back(maxV-v[i]);
    }
    int prev=0;
    ll total=0;
    sort(mv.rbegin(),mv.rend());
    while(!mv.empty()){
        total+=(mv.back()-prev)*(mv.size()+1);
        prev=mv.back();
        mv.pop_back();
    }
    cout<<total<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}