#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    auto ok=[&](int distance){
        int count=1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[j]-v[i]>=distance){
                    count++;
                    i=j-1;
                    break;
                }
            }
        }
        return count>=k;

    };
    int l=0,r=v[n-1]-v[0],mid,ans=0;
    while(l<=r){
        mid =l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}