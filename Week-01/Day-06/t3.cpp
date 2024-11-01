#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    map<string,int>mp;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        mp[s]++;
    }
    cout<<mp.size()<<endl;
    return 0;
}