#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack<ll>st;
    for(ll i=0;i<n;i++){
        if(s[i]=='0')st.push(i);
    }
    ll ans=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0'){
            st.pop();
            cout<<ans<<" ";
        }
        else if(s[i]=='1'&&!st.empty()){
            ll id=st.top();
            st.pop();
            ans+=abs(id-i);
            s[id]='1',s[i]='0';
            cout<<ans<<" ";
        }
        else if(s[i]=='1'&&st.empty()){
            ans=-1;
            cout<<ans<<" ";
        }
        
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}