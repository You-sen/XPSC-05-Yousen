#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int l=0,r=n-1,mid,ans=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(m>=v[mid]){
                ans=mid+1;
                l=mid+1;
            }
            else if(v[mid]>m){
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}