#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll r,c;
    cin>>r>>c;
    string s;
    cin>>s;
    vector<vector<ll>>v(r,vector<ll>(c));
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cin>>v[i][j];
        }
    }
    vector<ll>row(r),col(c);
    for(ll i=0;i<r;i++){
        ll sum=0;
        for(ll j=0;j<c;j++){
            sum+=v[i][j];
        }
        row[i]=sum;
    }
    for(ll i=0;i<c;i++){
        ll sum=0;
        for(ll j=0;j<r;j++){
            sum+=v[j][i];
        }
        col[i]=sum;
    }
    ll st=0,en=0;
    ll count=0;
    while(count<r+c-1){
        if(s[count]=='D'){
            v[st][en]-=row[st];
            col[en]-=row[st];
            row[st]=0;
            st++;
        }
        else{
            v[st][en]-=col[en];
            row[st]-=col[en];
            col[en]=0;
            en++;
        }
        count++;
    }
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}