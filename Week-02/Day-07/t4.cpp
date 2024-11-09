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
        map<int,set<int>>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(q--){
            int a,b;
            cin>>a>>b;
            if(mp[a].size()==0||mp[b].size()==0){
                cout<<"NO"<<endl;
            }
            else{
                auto aset=mp[a].begin();
                auto bset=mp[b].lower_bound(*aset);
                if(bset!=mp[b].end()){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}