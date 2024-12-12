#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<=m;i++){
        cin>>v[i];
    }
    int fri=0;
    for(int i=0;i<m;i++){
        //xor helps to find mismatch
        int miss=0;
        int res=v[i]^v[m];
        for(int mask=n-1;mask>=0;mask--){
            if((res>>mask)&1){
                miss++;
            }
            if(miss>k){
                break;
            }
        }
        if(miss<=k)fri++;
    }
    cout<<fri<<endl;
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}
/*
//matching bits by bits using and op
for(int i=0;i<m;i++){
        int miss=0;
        for(int mask=n-1;mask>=0;mask--){
            if(((v[i]>>mask)&1)!=((v[m]>>mask)&1)){
                miss++;
            }
            if(miss>k){
                break;
            }
        }
        if(miss<=k)fri++;
    }
*/