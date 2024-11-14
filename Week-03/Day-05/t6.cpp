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
        string s;
        cin>>s;
        int l=0,r=0,ans=INT_MAX,temp=0;
        while(r<n){
            if(s[r]=='W')temp++;
            if(r-l+1==k){
                ans=min(ans,temp);
                if(s[l]=='W')temp--;
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}