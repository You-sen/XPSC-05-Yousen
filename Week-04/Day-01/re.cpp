#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        ll count=b;
        ll c2=0;
        for(auto x:v){
            count+=min(a,x);
            if(min(a,x)==a)c2++;
        }
        cout<<count-c2<<endl;
    }
    return 0;
} 