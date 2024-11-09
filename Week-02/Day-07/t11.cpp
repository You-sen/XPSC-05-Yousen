#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        set<int>b;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            b.insert(x);
        }
        while(q--){
            int x;
            cin>>x;
            auto right=b.upper_bound(x);
            if(right==b.begin()){
                cout<<*right-1<<endl;
            }
            else if(right==b.end()){
                cout<<n-*prev(b.end())<<endl;
            }
            else{
                cout<<(*right-*prev(right))/2<<endl;
            }
        }
    }
    return 0;
}