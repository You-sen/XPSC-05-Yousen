#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int>v(n),vs;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--){
        s.insert(v[i]);
        vs.push_back(s.size());
    }
    reverse(vs.begin(),vs.end());
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        x--;
        cout<<vs[x]<<endl;
    }
    return 0;
}