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
        vector<int>na(n);
        for(int i=0;i<n;i++){
            cin>>na[i];
        }
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            string s;
            cin>>s;
            for(int j=m-1;j>=0;j--){
                if(s[j]=='D'){
                    if(na[i]==9) na[i]=0;
                    else na[i]++;
                }
                else{
                    if(na[i]==0) na[i]=9;
                    else na[i]--;
                }
            }
        }
        for(auto v:na){
            cout<<v<<" ";
        }cout<<endl;
    }
    return 0;
}