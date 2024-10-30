#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int i=0,j=n-1;
        bool st=true,en=true;
        while(st||en){
            if(s[i]=='B'&&st){
                st=false;
            }
            else if(st) i++;
            if(s[j]=='B'&&en){
                en=false;
            }
            else if(en) j--;
        }
        cout<<j-i+1<<endl;
    }
    return 0;
}