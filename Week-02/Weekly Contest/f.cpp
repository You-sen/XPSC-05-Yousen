#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int pos;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                pos=i;
                break;
            }
        }
        if(pos+2>=n){
            cout<<s<<endl;
            continue;
        }
        else{
            for(int i=pos+1;i<n;i++){
                s[i]='0';
            }
            cout<<s<<endl;
        }
    }
    return 0;
}