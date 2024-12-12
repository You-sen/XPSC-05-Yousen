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
    set<int>s;
    int maxBit=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        // if(maxBit<__lg(v[i])){
        //     maxBit=__lg(v[i]);
        // }
    }
    int OR=v[0];
    for(int i=1;i<n;i++){
        OR=OR|v[i];
    }
    cout<<OR<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
    /*
    int ans=0;
    for(int i=0;i<=maxBit;i++){
        if((OR>>i)&1){
            ans+=(1LL<<i);
        }
    }*/