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
        string s1,s2,s3;
        cin>>s1;
        s2=s1;
        sort(s2.begin(),s2.end());
        int j=1;
        for(int i=0;i<n;i++){
            if(s2[i]!=s2[j])s3+=s2[i];
            j++;
        }
        s2=s3;
        reverse(s3.begin(),s3.end());
        map<char,char>mp;
        for(int i=0;i<s2.size();i++){
            mp[s2[i]]=s3[i];
        }
        for(int i=0;i<n;i++){
            auto it=mp.find(s1[i]);
            cout<<it->second;
        }cout<<endl;
    }
    return 0;
}