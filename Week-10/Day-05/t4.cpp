#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v(n),prefix(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.rbegin(),v.rend());
        prefix[0]=v[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+v[i];
        }
        while(q--){
            int k,ans=-1;;
            cin>>k;
            auto it=lower_bound(prefix.begin(),prefix.end(),k);
            if(it!=prefix.end()){
                ans=it-prefix.begin()+1;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
