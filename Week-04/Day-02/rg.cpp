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
        string s,rs;
        cin>>s;
        for(int i=n-1;i>=0;i--){
            if(s[i]!='0'){
                int c1=s[i]-'0';
                char c=c1+96;
                rs.push_back(c);
            }
            else{
                string s1=s.substr(i-2,2);
                char c=stoi(s1)+96;
                rs.push_back(c);
                i-=2;
            }
        }
        reverse(rs.begin(),rs.end());
        cout<<rs<<endl;
    }
    return 0;
}