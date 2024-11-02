#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp[s]==0){
            cout<<"OK"<<endl;
        }
        else{
            auto it=mp[s];
            cout<<s<<mp[s]<<endl;
        }
        mp[s]++;    
    }
    return 0;
}