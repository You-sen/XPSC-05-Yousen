#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string ip,s;
        cin>>s>>ip;
        ip+=';';
        mp[ip]=s;
    }
    for(int i=0;i<m;i++){
        string comm,ip;
        cin>>comm>>ip;
        cout<<comm<<" "<<ip<<" #"<<mp[ip]<<endl;;
    }
    return 0;
}