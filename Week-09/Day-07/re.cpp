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
    int count=1;
    int i=1;
    while(i<n){
        i=(i+1)*2;
        count++;
    }
    cout<<count<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}