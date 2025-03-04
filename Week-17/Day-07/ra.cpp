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
    string s="";
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            s+=char(j+97);
        }
    }
    cout<<s<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}