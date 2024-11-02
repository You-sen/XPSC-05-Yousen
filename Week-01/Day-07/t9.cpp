#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<string>v;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        mp[s]++;
    }
    for(auto it=v.rbegin();it!=v.rend();it++){
        if(mp[*it]>0){
            cout<<*it<<endl;
            mp[*it]=0;
        }
    }
    return 0;
}