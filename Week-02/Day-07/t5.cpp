#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int qr;
    cin>>qr;
    set<int>s;
    priority_queue<pair<int,int>>pq;
    queue<pair<int,int>>q;
    int i=1;
    while(qr--){
        int a;
        cin>>a;
        if(a==1){
            int b;
            cin>>b;
            pq.push({b,-i});
            q.push({i,b});
            i++;
        }
        else if(a==2){
            while(!q.empty()&&s.count(q.front().first)){
                q.pop();
            }
            if(!q.empty()){
                int value=q.front().first;
                cout<<value<<" ";
                s.insert(value);
            }
        }
        else if(a==3){
            while(!pq.empty()&&s.count(-pq.top().second)){
                pq.pop();
            }
            if(!pq.empty()){
                int value=-pq.top().second;
                cout<<value<<" ";
                s.insert(value);
            }
        }
    }cout<<endl;
    return 0;
}
//using (int,-int) sorts high to low and if multiple high is there uses second value high to low.