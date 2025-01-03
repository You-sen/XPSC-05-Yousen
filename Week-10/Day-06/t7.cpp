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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i>0){
            v[i]+=v[i-1];
        }
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int labeled=lower_bound(v.begin(),v.end(),q)-v.begin();
        cout<<labeled+1<<endl;
    }
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}