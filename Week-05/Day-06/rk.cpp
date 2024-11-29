#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n),ps(k),check;
    for(ll i=0;i<k;i++){
        cin>>ps[i];
    }
    if(k==1){
        yes
        return;
    }
    reverse(ps.begin(),ps.end());
    ll diff=ps[k-2]-ps[k-1];
    for(ll i=k;i<n;i++){
        ps.push_back(ps[i-1]-diff);
    }
    reverse(ps.begin(),ps.end());
    v[0]=ps[0];
    for(ll i=1;i<n;i++){
        v[i]=ps[i]-ps[i-1];
    }
    check=v;
    sort(check.begin(),check.end());
    if(check==v)yes
    else no
}
int main() {
    fasterIO
    testCase
    solve();
    return 0;
}