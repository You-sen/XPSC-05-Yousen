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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll total=accumulate(v.begin(),v.end(),0LL);
    if(((2*total)%n)!=0){
        cout<<0<<endl;
        return;
    }
    ll totalNeed=(2*total)/n;
    ll count=0;
    for(int i=0;i<n;i++){
        int one=v[i],two=totalNeed-one;
        if(one==two)count--;
        count+=mp[two];
    }
    cout<<count/2<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}