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
    int x;
    int AND=~(AND&0);
    for(int i=0;i<n;i++){
        cin>>x;
        AND&=x;
    }
    cout<<AND<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}