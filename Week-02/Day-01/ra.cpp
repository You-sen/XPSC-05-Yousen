#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a!=x) v.push_back(a);
    }
    for(auto value:v) cout<<value<<" ";
    cout<<endl;
    return 0;
}