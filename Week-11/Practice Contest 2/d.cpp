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
    vector<ll> odd,even;
    ll count=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0)even.push_back(x);
        else odd.push_back(x);
    }
    sort(odd.begin(),odd.end());
    sort(even.rbegin(),even.rend());
    if(odd.size()==n||even.size()==n){
        cout<<0<<endl;
    }
    else{
        while(even.size()!=0){
            ll oddBack=odd.back();
            ll evenBack=even.back();
            if(oddBack>evenBack){
                odd.push_back(oddBack+evenBack);
                even.pop_back();
                count++;
            }
            else{
                odd.pop_back();
                odd.push_back(oddBack+even[0]);
                count++;
            }
        }
        cout<<count<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}