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
    vector<int>v(n),res(n+1,0);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=v[j];
            if(sum>n)break;
            res[sum]++;
        }
    }
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}