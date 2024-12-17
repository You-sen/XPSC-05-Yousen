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
    ll al=((ll)n*((ll)n+1)/2);
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        al-=a[i];
    }
    a.push_back(al);
    k=k%(n+1);
    for(int i=n+1-k;i<=n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-k;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}