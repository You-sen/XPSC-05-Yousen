#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    int l=0,r=0;
    vector<int>ans;
    queue<int>q;
    while(r<n){
        if(v[r]<0) q.push(v[r]);
        if(r-l+1==k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(v[l]==q.front()){
                    q.pop();
                }
            }
            else{
                ans.push_back(0);
            }
            l++,r++;
        }
        else{
            r++;
        }
    }
    for(auto x:v)cout<<x<<" ";
    return 0;
}