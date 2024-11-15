#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<string>vs(n);
    map<string,int>mp;
    string ans;
    for(int i=0;i<n;i++){
        cin>>vs[i];
    }
    for(int i=n-1;i>=0;i--){
        mp[vs[i]]++;
        if(mp[vs[i]]==1){
            string temp=vs[i];
            ans+=temp.substr(temp.size()-2);
        }
    }
    cout<<ans<<endl;
    return 0;
}