    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
    
        int n;
        cin>>n;
        map<string,string>mp;
        for(int i=0;i<n;i++){
            string o,n;
            cin>>o>>n;
            mp[o]=n;
        }
        for(auto &it:mp){
            auto it2=mp.find(it.second);
            while(it2!=mp.end()){
                mp[it.first]=it2->second;
                mp.erase(it2);
                it2=mp.find(it.second);
            }
        }
        cout<<mp.size()<<endl;
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        return 0;
    }