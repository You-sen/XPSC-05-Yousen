#include<bits/stdc++.h>
using namespace std;
vector<int>allPrimes={2,3,5,7,11,13,17,19,23,29,31};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,vector<int>>mp;
        /*
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(a[i]%allPrimes[j]==0){
                    mp[allPrimes[j]].push_back(a[i]);
                    break;
                }
            }
        }
        for(auto x:mp){
            cout<<x.first<<"->";
            for(auto value:x.second){
                cout<<value<<" ";
            }cout<<endl;
        }
        */
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(a[i]%allPrimes[j]==0){
                    mp[allPrimes[j]].push_back(i);
                    break;
                }
            }
        }
        vector<int>ans(n);
        int color=1;
        for(auto x:mp){
            for(auto pos:x.second){
                ans[pos]=color;
            }color++;
        }
        cout<<mp.size()<<endl;
        for(auto value:ans){
            cout<<value<<" ";
        }cout<<endl;
    }
    return 0;
}
/*
we need to figure out the prime factor of all number,
every number can be colored same if they all have atleast one same prime factor. cause it will ensure that their gcd is >1
*/