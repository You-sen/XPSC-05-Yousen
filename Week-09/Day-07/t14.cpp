#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

vector<int>coPrime[1001];
int GCD(int a,int b){
    return __gcd(a,b);
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n+1),index(1001,-1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        index[v[i]]=i;
    }
    int ans=-1;
    for(int i=1;i<=1000;i++){
        if(index[i]==-1)continue;
        if(i==1){
            ans=max(ans,2*index[i]);
            continue;
        }
        for(auto x:coPrime[i]){
            if(index[x]==-1)continue;
            ans=max(ans,index[i]+index[x]);
        }
    }
    cout<<ans<<endl;
}

int main() {
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(GCD(i,j)==1){
                coPrime[i].push_back(j);
            }
        }
    }
    fasterIO
    testCase
    solve();
    return 0;
}