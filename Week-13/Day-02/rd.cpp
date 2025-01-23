#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,m,k,count=0;
    cin>>n>>m>>k;
    vector<int>left(n),right(m);
    for(int i=0;i<n;i++)cin>>left[i];
    for(int i=0;i<m;i++)cin>>right[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(left[i]+right[j]<=k)count++;
        }
    }
    cout<<count<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}