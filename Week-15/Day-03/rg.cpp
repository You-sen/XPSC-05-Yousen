#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s,t,v="aeiou";
    cin>>s>>t;
    if(s.size()!=t.size())cout<<"No"<<endl;
    else{
        for(int i=0;i<s.size();i++){
            if(v.find(s[i])!=string::npos){
                s[i]='1';
            }
            else{
                s[i]='0';
            }
            if(v.find(t[i])!=string::npos){
                t[i]='1';
            }
            else{
                t[i]='0';
            }
        }
        cout<<(s==t?"Yes":"No")<<endl;
    }
    return 0;
}