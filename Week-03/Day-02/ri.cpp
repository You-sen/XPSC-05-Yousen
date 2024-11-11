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
        vector<vector<int>>v;
        map<int,int>mp;
        int maxV=0,maxE;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n-1;j++){
                int x;
                cin>>x;
                temp.push_back(x);
            }
            mp[temp[0]]++;
            v.push_back(temp);
        }
        for(auto value:mp){
            int key=value.first;
            int keyvalue=value.second;
            if(maxV<keyvalue){
                maxV=keyvalue;
                maxE=key;
            }
        } 
        bool flag=true;
        for(int i=0;i<n;i++){
            if(flag=false) break;
            if(v[i][0]!=maxE){
                flag=false;
                cout<<maxE<<" ";
                for(int j=0;j<n-1;j++){
                    cout<<v[i][j]<<" ";
                }cout<<endl;
            }
        }

    }
    return 0;
}