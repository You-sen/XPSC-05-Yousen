#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),h(n);
        
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>h[i];
        long long l=0,r=0;
        long long sum=0,ans=0;
        while(r<n){
            sum+=a[r];
            while(l<r&&(sum>k||h[r-1]%h[r]!=0)){
                sum-=a[l];
                l++;
            }
            if(sum<=k){
                ans=max(ans,r-l+1);
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}