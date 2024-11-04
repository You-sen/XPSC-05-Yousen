#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        bool f=true;
        string s,match="Timru";
        cin>>n>>s;
        sort(s.begin(),s.end());
        //cout<<s<<endl;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<5;i++){
            if(s[i]!=match[i]){
                f=false;
            }
        }
        cout<<(f?"YES":"NO")<<endl;
    }
    return 0;
}