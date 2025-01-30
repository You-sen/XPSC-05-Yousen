#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    map<ll,int>mp;
    priority_queue<ll>pq;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    if(n==1){
        yes return;
    }
    ll totalW=accumulate(v.begin(),v.end(),0LL);
    pq.push(totalW);
    while(pq.size()<n){
        ll leftS=pq.top()/2,rightS=pq.top()-leftS;
        pq.pop();
        if(mp[leftS]>0)mp[leftS]--,n--;
        else pq.push(leftS);
        if(mp[rightS]>0)mp[rightS]--,n--;
        else pq.push(rightS);
    }
    if(pq.size()==0)yes
    else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}