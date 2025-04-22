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
    if(!(n&1)){
        minus return;
    }
    int st=1;
    for(int i=1;i<=(n+1)/2;i++){
        cout<<st<<" ";
        st+=2;
    }
    st=2;
    for(int i=1;i<=n/2;i++){
        cout<<st<<" ";
        st+=2;
    }
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}