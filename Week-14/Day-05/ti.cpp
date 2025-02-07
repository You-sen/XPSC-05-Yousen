#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
//set
template<typename T>using pbdsS=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    string r=s;
    reverse(r.begin(),r.end());
    map<char,vector<int>> posS,posR;
    for(int i=0;i<n;i++){
        posS[s[i]].push_back(i);
        posR[r[i]].push_back(i);
    }
    vector<int>permutation(n);
    for(char ch='a';ch<='z';ch++){
        for(int i=0;i<posS[ch].size();i++){
            permutation[posR[ch][i]]=posS[ch][i];
        }
    }
    pbdsS<int>p;
    long long ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout<<ans<<endl;
    return 0;
}
