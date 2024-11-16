#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        ll ans=0;
        ll l=0,r=0;
        while(l<n){
            if(v[l]>q){
                l++;
                continue;
            }
            r=l;
            while(r<n&&v[r]<=q){
                r++;
            }
            if(r-l>=k){
                ll temp=r-l-k+1;
                ans+=((temp*(temp+1))/2);
            }
            l=r;
        }
        cout<<ans<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin>>t;
//     while(t--){
//         ll n,k,q;
//         cin>>n>>k>>q;
//         vector<ll>nv(n);
//         vector<ll>range;
//         for(ll i=0;i<n;i++)cin>>nv[i];
//         ll ans=0;
//         ll l=0,r=0;
//         while(r<n){
//             if(nv[r]>q){
//                 if(r-l>=k)range.push_back(r-l);
//                 r++;
//                 l=r;
//             }
//             else if(nv[r]<=q){
//                 r++;
//             }
//         }
        
//         for(auto x:range){
//             cout<<x<<endl;
//             ans+=((x-k+1)*(x-k+2))/2;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }