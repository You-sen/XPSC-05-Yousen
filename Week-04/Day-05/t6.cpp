#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    long long k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0;
    long long ans=0;
    multiset<long long>ms;
    while(r<n){
        ms.insert(a[r]);
        long long minV=*ms.begin(),maxV=*ms.rbegin();
        if(maxV-minV<=k){
            ans+=(r-l+1);
        }
        else{
            while(l<=r){
                minV=*ms.begin(),maxV=*ms.rbegin();
                if(maxV-minV<=k){
                    break;
                }
                ms.erase(ms.find(a[l]));
                l++;
            }
            minV=*ms.begin(),maxV=*ms.rbegin();
                if(maxV-minV<=k){
                    ans+=(r-l+1);
                }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}