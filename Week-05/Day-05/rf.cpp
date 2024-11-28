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
    cout<<(n/2)+(n%2)<<endl;
    int l=1,r=3*n;
    while(l<r){
        cout<<l<<" "<<r<<" ";
        l+=3;
        r-=3;
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}