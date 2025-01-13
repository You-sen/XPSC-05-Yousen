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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int sortedSeq=1;
    for(int i=0;i<n;i++){
        if(v[i]==sortedSeq)sortedSeq++;
    }
    cout<<(n-sortedSeq+k)/k<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}