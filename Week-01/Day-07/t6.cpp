#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s,s2;
        cin>>s;
        int B=0,b=0;
        for(auto i=s.rbegin();i!=s.rend();i++){
            if(*i=='b'){
                b++;
            }
            else if(*i=='B'){
                B++;
            }
            else if(b&&(*i>='a'&&*i<='z')){
                b--;
            }
            else if(B&&(*i>='A'&&*i<='Z')){
                B--;
            }
            else if(!b||!B){
                s2+=*i;
            }
        }
        reverse(s2.begin(),s2.end());
        cout<<s2<<endl;
    }
    return 0;
}