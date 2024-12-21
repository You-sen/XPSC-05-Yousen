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
    vector<string>v(n);
    map<string,int>vmp;
    map<char,int>first,second;
    for(int i=0;i<n;i++){
        cin>>v[i];
        string s=v[i];
        vmp[s]++;
        first[s[0]]++;
        second[s[1]]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        string s=v[i];
        ll firstCount=first[s[0]]-vmp[s];
        ll secondCount=second[s[1]]-vmp[s];
        ans+=(firstCount+secondCount);
        first[s[0]]--,second[s[1]]--,vmp[s]--;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}