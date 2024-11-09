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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0,r=n-1;
        int maxV=n,minV=1;
        while(l<=r){
            if(v[l]!=minV&&v[l]!=maxV&&v[r]!=minV&&v[r]!=maxV) break;
            if(v[l]==minV){
                minV++;
                l++;
            }
            else if(v[l]==maxV){
                maxV--;
                l++;
            }
            else if(v[r]==maxV){
                maxV--;
                r--;
            }
            else if(v[r]==minV){
                minV++;
                r--;
            }
        }
        l++;r++;
        if(l<=r)cout<<l<<" "<<r<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}