#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;
const ll inf=1e10;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll>room(k),temp(k),ans(n,inf);
    for(int i=0;i<k;i++){
        cin>>room[i];
        room[i]--;
    }
    for(int i=0;i<k;i++){
        int t;
        cin>>t;
        ans[room[i]]=t;
    }
    for(int i=1;i<n;i++){
        ans[i]=min(ans[i],ans[i-1]+1);
    }
    for(int i=n-2;i>=0;i--){
        ans[i]=min(ans[i],ans[i+1]+1);
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