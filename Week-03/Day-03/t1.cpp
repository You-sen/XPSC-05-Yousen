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
        string s;
        cin>>s;
        int l=0,r=n-1,size=n;
        while(l<=r){
            if(s[l]==s[r]){
                break;
            }
            else{
                size-=2;
                l++;r--;
            }
        }
        cout<<size<<endl;
    }
    return 0;
}