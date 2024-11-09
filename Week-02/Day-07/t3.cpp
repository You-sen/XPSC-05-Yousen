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
        map<int,int>mp;
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto val:mp){
            pq.push(val.second);
        }
        while(pq.size()>1){
            int firstTop=pq.top();
            pq.pop();
            int secondTop=pq.top();
            pq.pop();
            firstTop--;
            if(firstTop!=0)pq.push(firstTop);
            secondTop--;
            if(secondTop!=0)pq.push(secondTop);
        }
        cout<<(pq.size()==0?0:pq.top())<<endl;
    }
    return 0;
}