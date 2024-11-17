#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        if((a*n)+b>=s){
            ll rem=s/n;
            ll needA=min(a,rem);
            if((needA*n)+b>=s){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}