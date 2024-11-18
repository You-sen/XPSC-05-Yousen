#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int first=abs(a-1);
        int second=abs(b-c)+abs(c-1);
        if(first<second)cout<<1<<endl;
        else if(first>second)cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}