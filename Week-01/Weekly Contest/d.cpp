#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        x=100-x;
        cout<<(x/10)*10<<endl;
    }
    return 0;
}