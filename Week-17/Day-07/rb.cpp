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
    string s,f;
    cin>>s>>f;
    int s1=0,f1=0;
    for(int i=0;i<n;i++){
        if(s[i]==f[i])continue;
        else{
            if(s[i]=='1')s1++;
            else f1++;
        }
    }
    cout<<max(s1,f1)<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}