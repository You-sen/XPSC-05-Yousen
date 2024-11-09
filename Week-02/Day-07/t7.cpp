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
        vector<int>p(n);
        vector<int>one,zero;
        int ones,zeros;
        string s;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0')zero.push_back(p[i]);
            else one.push_back(p[i]);
        }
        sort(one.begin(),one.end());
        sort(zero.begin(),zero.end());
        ones=one.size();
        zeros=zero.size();
        for(int i=0;i<ones;i++){
            mp[one[i]]=zeros+1+i;
        }
        for(int i=0;i<zeros;i++){
            mp[zero[i]]=i+1;
        }
        for(int i=0;i<n;i++){
            p[i]=mp[p[i]];
        }
        for(auto value:p){
            cout<<value<<" ";
        }cout<<endl;
    }
    return 0;
}