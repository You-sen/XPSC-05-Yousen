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
    map<int,int>freq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(freq.find(x)==freq.end()){
                freq[x] = 0;
            }
            cout<<char('a'+freq[x]);
            freq[x]++;
        }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}