#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        vector<pair<int,int>>mp;
        for(int i=0;i<n;i++){
            int m,l;
            cin>>m>>l;
            mp.push_back({m,l});
        }
        ll total=0;
        sort(mp.begin(),mp.end(),greater<>());
        for(auto value:mp){
            if(k==0) break;
            int lan=value.second;
            int time=value.first;
            if(lan==l){
                total+=time;
                k--;
            }
        }
        if(k>0||total==0)cout<<-1<<endl;
        else cout<<total<<endl;
    }
    return 0;
}