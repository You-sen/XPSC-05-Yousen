#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i]; 
    auto ok=[&](long long seconds){
        long long count=0;
        for(int i=0;i<n;i++){
            count+=(seconds/a[i]);
            if(count>=t) return true;
        }
        return false;
    };

    long long l=1,r=1e18,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
