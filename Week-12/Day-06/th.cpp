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
    int ones=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1)ones++;
        else if(x<=n)mp[x]++;
    }
    vector<int>v(n+1);
    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            v[j]+=mp[i];
        }
    }
    cout <<*max_element(v.begin(),v.end())+ones<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}