#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    while(k--){
        int x;
        cin>>x;
        int l=0,r=n-1,mid;
        bool flag=false;
        while(l<=r){
            mid=(l+r)/2;
            if(x==v[mid]){
                flag=true;
                break;
            }
            else if(x<v[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}