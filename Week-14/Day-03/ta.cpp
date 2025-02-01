#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>d(n+1);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        d[l]++,d[r+1]--;
    }
    for(int i=1;i<=n;i++){
        d[i]+=d[i-1];
    }
    sort(v.rbegin(),v.rend());
    sort(d.rbegin(),d.rend());
    long long total=0;
    for(int i=0;i<n;i++){
        total+=(1LL*v[i]*d[i]);
    }
    cout<<total<<endl;
    return 0;
}