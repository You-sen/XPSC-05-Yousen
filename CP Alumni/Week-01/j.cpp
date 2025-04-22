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
    vector<ll>even,odd;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x&1)odd.push_back(x);
        else even.push_back(x);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    if(odd.size()==0){
        cout<<even.back()<<endl;
        return;
    }
    if(even.size()==0){
        cout<<odd.back()<<endl;
        return;
    }
    if(even.size()>0&&odd.size()>0){
        for(ll i=0;i<odd.size()-1;i++){
            even[0]+=(odd[i]-1);
        }
        ll sum=accumulate(even.begin(),even.end(),0LL);
        sum+=odd[odd.size()-1];
        cout<<sum<<endl;
    }
}

void solve2(){
    ll n;
    cin>>n;
    ll even=0,odd=0,maxV=0,sum=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=x;
        maxV=max(maxV,x);
        if(x&1)odd++;
        else even++;
    }
    if(odd==0||even==0){
        cout<<maxV<<endl;
        return;
    }
    sum-=(odd-1);
    cout<<sum<<endl;
}
int main() {
    fasterIO
    testCase
    solve2();
    return 0;
}