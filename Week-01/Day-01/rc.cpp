#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin>>a>>b;
    int maxB=max(a,b);
    if(abs(a-b)<2)cout<<a+b<<endl;
    else cout<<(2*maxB)-1<<endl;
    return 0;
}