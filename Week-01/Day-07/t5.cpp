#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<string>>v;
        map<string,int>mp;
        for(int i=0;i<3;i++){
            vector<string>sv;
            for(int j=0;j<n;j++){
                string s;
                cin>>s;
                sv.push_back(s);
                mp[s]++;
            }
            v.push_back(sv);
        }
        for(int i=0;i<3;i++){
            int ans=0;
            for(int j=0;j<n;j++){
                if(mp[v[i][j]]==1)ans+=3;
                else
                ans+=(3-mp[v[i][j]]);
            }
            cout<<ans<<" ";
        }cout<<endl;
    }
    return 0;
}