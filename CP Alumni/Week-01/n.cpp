#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,x,k;
    string s;
    cin>>n>>x>>k>>s;
    ll ans=0,pos=x;
    for(ll i=0;i<n;i++){
        if(s[i]=='L')pos--;
        else pos++;
        if(pos==0){
            ans++;
            k-=(i+1);
            break;
        }
    }
    if(pos==0){
        ll time=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='L')pos--;
            else pos++;
            if(pos==0){
                time=i+1;
                break;
            }
        }
        if(time>0)ans+=(k/time);
    }
    cout<<ans<<endl;
    
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}