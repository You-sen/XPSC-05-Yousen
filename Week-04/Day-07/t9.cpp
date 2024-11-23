#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                a[i]+=a[i-1];
            }
        }
        string s;
        cin>>s;
        int l=0,r=n-1;
        long long ans=0;
        while(l<=r){
            if(s[l]=='L'&&s[r]=='R'){
                if(l==0)ans+=a[r];
                else ans+=a[r]-a[l-1];
                l++;
                r--;
            }
            else if(s[l]=='R')l++;
            else if(s[r]=='L')r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}