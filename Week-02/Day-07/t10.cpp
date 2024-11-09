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
        priority_queue<int>v;
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            v.push(i+1);
        }
        while(v.size()>1){
            int a=v.top();
            v.pop();
            int b=v.top();
            v.pop();
            v.push((a+b+1)/2);
            vp.push_back({a,b});
        }
        cout<<v.top()<<endl;
        for(auto val:vp){
            cout<<val.first<<" "<<val.second<<endl;
        }
    }
    return 0;
}