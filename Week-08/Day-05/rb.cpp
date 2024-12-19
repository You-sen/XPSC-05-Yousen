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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int aliceMin=INT_MAX;
    for(int i=0;i<n;i++){
        int bobMax=INT_MIN;
        for(int j=i-1;j<=i+1;j++){
            if(j<0||j>=n||j==i)continue;
            bobMax=max(bobMax,abs(v[i]-v[j]));
        }
        aliceMin=min(aliceMin,bobMax);
    }
    cout<<aliceMin<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}