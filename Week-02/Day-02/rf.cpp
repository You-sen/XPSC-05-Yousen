#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int c;
        string one,two;
        cin>>c>>one>>two;
        for(int i=0;i<c;i++){
            if(one[i]=='G') one[i]='B';
            if(two[i]=='G') two[i]='B';
        }
        cout<<(one==two?"YES":"NO")<<endl;
    }
    return 0;
}