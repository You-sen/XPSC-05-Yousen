#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0,count=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=k){
                ans+=x;
            }
            else if(x==0&&ans>0){
                ans--;count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}