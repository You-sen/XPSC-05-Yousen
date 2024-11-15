#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int>vn(n),vm(m),vnm;
    for(int i=0;i<n;i++){
        cin>>vn[i];
    }
    for(int i=0;i<m;i++){
        cin>>vm[i];
    }
    int l=0,r=0;
    while(l<n&&r<m){
        if(vn[l]<=vm[r]){
            vnm.push_back(vn[l]);
            l++;
        }
        else{
            vnm.push_back(vm[r]);
            r++;
        }
    }
    if(l<n){
        for(int i=l;i<n;i++){
            vnm.push_back(vn[i]);
        }
    }
    if(r<m){
        for(int i=r;i<m;i++){
            vnm.push_back(vm[i]);
        }
    }
    for(auto v:vnm){
        cout<<v<<" ";
    }cout<<endl;
    return 0;
}