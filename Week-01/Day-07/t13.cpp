#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    map<int,int>mp;
    int max=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]>max) max=mp[x];
    }
    cout<<max<<endl;
    return 0;
}