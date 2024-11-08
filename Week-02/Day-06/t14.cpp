#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        map<int,int>mp;
        multiset<int>ms;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
            ms.insert(x);
        }
        for(auto value:ms){
            if(mp[value]!=0){
                count++;
                while(mp[value]>0){
                    mp[value]--;
                    value++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}