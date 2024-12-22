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
    vector<int>x(n),y(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
    vector<int>diff(n);
    for(int i=0;i<n;i++){
        diff[i]=y[i]-x[i];
    }
    sort(diff.begin(),diff.end(),greater<int>());
    int j=n-1,days=0;
    for(int i=0;i<n;i++){
        while(j>i&&diff[i]+diff[j]<0)j--;
        if(j<=i)break;
        days++,j--;
    }
    cout<<days<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}