#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;
    int a[26]={0};
    for(auto x:s){
        a[x-'a']++;
    }
    string ans="None";
    for(int i=0;i<26;i++){
        if(a[i]==0){
            ans=i+'a';
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}