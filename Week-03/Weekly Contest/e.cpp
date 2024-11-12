#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll total=0;
        ll neg=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]<0){
                neg++;
                v[i]=v[i]*(-1);
            }
        }
        
        if(neg%2!=0){
            sort(v.begin(),v.end());
            v[0]=v[0]*(-1);
            for(int i=0;i<n;i++){
                total+=v[i];
            }
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<n;i++){
                total+=v[i];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}