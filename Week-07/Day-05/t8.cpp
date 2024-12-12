#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    string s;
    cin>>s;
    int digits=s.size();
    int ans=0;
    for(int i=1;i<digits;i++){
        ans+=(1<<i);
    }
    int count=0;
    for(int i=digits-1;i>=0;i--){
        if(s[i]=='7'){
            ans+=(1<<count);
        }
        count++;
    }
    cout<<ans+1<<endl;
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}