#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        set<int>mset;
        string sn,cm;
        cin>>n>>m;
        cin>>sn;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            x--;
            mset.insert(x);
        }
        cin>>cm;
        sort(cm.begin(),cm.end());
        int i=0;
        for(auto ind:mset){
            sn[ind]=cm[i];
            i++;
        }
        cout<<sn<<endl;
    }
    return 0;
}