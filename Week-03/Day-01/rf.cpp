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
        vector<int>v(n);
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int op=-1;
        for(int i=n-1;i>=0;i--){
            if(s.find(v[i])==s.end()){
                s.insert(v[i]);
            }
            else{
                op=i;
                break;
            }
        }
        cout<<op+1<<endl;
    }
    return 0;
}