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
        int key;
        cin>>key;
        int l=0,r=n-1,mid;
        int index=n+1;
        while(l<=r){
            mid=(l+r)/2;
            if(key<=v[mid]){
                index=mid+1;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}