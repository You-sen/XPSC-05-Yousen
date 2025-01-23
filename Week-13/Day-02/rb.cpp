#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n);
    v[0]=a,v[n-1]=b;
    vector<int>vm;
    for(int i=1;i<=n;i++){
        if(i!=a&&i!=b)vm.push_back(i);
    }
    for(int i=1;i<n-1;i++){
        v[i]=vm.back();
        vm.pop_back();
        if(i<n/2&&v[i]<a){
            minus return;
        }
        if(i>=n/2&&v[i]>b){
            minus return;
        }
    }
    
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}