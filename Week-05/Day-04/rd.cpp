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
    int start=n-k;
    for(int i=start;i>=1;i--){
        cout<<i<<" ";
    }
    for(int i=start+1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}