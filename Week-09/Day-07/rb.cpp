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
        string s;
        cin>>s;
        int A=0,B=0,C=0,D=0,Q=0,marks=0;
        for(auto c:s){
            if (c=='A') A++;
            else if (c=='B') B++;
            else if (c=='C') C++;
            else if (c=='D') D++;
            else Q++;
        }
        if(A>=n) marks+=n;
        else marks+=A;
        if(B>=n) marks+=n;
        else marks+=B;
        if(C>=n) marks+=n;
        else marks+=C;
        if(D>=n) marks+=n;
        else marks+=D;
        cout<<marks<<endl;
    }
    return 0;
}