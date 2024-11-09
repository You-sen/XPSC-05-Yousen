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
        long long ans=0;
        priority_queue<int>s;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]>0) s.push(v[i]);
            else{
                if(!s.empty()){
                    ans+=s.top();
                    s.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}