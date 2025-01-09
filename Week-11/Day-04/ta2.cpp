#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n,k;
    cin>>k>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    auto ok=[&](long long groups){
        long long need=groups*k;
        for(int i=0;i<n;i++){
            need-=min(v[i],groups);
        }
        return need<=0;
    };
    long long l=0,r=25*1e9,ans=0,mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}