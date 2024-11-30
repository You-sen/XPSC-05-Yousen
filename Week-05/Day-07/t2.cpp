#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,XOR=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            XOR^=a[i];
        }
        int ans=XOR;
        for(int i=0;i<n;i++){
            int curr=XOR^a[i];
            ans=min(curr,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}