#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;
    if(s.size()==4) cout<<s<<endl;
    else{
        reverse(s.begin(),s.end());
        while(s.size()!=4)s+='0';
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}