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
    int ans=INT_MAX;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j])
            count++;
        }
        count+=i;
        ans=min(ans,count);
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}