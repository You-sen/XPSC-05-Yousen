#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;

    int l=0,r=0;
    long long sum=0,ans=0;
    while(r<n){
        sum+=v[r];
        if(r-l+1==k){
            ans=max(ans,sum);
            sum-=v[l];
            l++;r++;
        }
        else{
            r++;
        }
    }
    cout<<ans<<endl;
    return 0;
}