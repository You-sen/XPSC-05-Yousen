#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,x;
    cin>>n;
    x=n;
    if(x%2!=0)x--;
    for(int i=1;i<=x/2;i++){
        cout<<i<<" "<<x+1-i<<" ";
    }
    if(n%2!=0)cout<<n;
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}