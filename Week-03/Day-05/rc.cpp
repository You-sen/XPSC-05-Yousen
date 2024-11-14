#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x!=0)
            mp[x]++;
        }
        if(mp.size()>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}