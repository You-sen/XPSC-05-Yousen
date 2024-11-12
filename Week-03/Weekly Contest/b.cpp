#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int type1=n*x;
        int type2=((n/2)*y)+((n%2)*x);
        cout<<max(type1,type2)<<endl;
    }
    return 0;
}