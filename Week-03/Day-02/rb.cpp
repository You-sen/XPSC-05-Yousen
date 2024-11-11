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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int minr=v[n-1]-v[2];
        minr=min(minr,v[n-3]-v[0]);
        minr=min(minr,v[n-2]-v[1]);
        cout<<minr<<endl;
    }
    return 0;
}