#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x,y,z;
    cin>>x>>y>>z;
    float teamP=x+(0.5*y);
    int remM=4-x-y-z;
    cout<<((teamP+remM)>2?"YES":"NO")<<endl;
    return 0;
}