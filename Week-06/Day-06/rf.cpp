#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,count=0;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    ll sumV=0;
    int maxV=INT_MIN;
    for (int i=0;i<n;i++) {
        sumV+=v[i];
        maxV=max(maxV,v[i]);
        if (sumV-maxV==maxV) {
            count++;
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