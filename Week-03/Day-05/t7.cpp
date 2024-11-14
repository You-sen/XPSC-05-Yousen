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
        int l=0,r=0,ans=0;
        bool flag=false;
        while(r<n){
            if(s[r]=='B')flag=true;
            if(s[l]!='B'){
                l++;
                r++;
                continue;
            }
            if(r-l+1==k){
                ans++;
                l+=k;
                flag=false;
            }
            r++;
        }
        if(flag)ans++;
        cout<<ans<<endl;
    }
    return 0;
}