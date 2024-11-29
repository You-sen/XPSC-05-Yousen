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
    string s;
    cin>>s;
    int count=0;
    int l=0,r=0;
    while(r<n){
        if(s[r]=='1'){
            r+=k+1;
            l=r;
            continue;
        }
        if(r-l==k){
            count++;
            r++;
            l=r;
        }
        else if(s[r]=='0'){
            r++;
            if(r>=n)count++;
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