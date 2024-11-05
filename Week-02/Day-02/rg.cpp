#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k,oddC=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(it.second%2!=0) oddC++;
        }
        cout<<(oddC-1>k?"NO":"YES")<<endl;
    }
    return 0;
}