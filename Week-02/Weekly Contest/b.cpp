#include<bits/stdc++.h>
using namespace std;
//#define long long long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        long long min=x*y;
        long long day=z*24*60;
        if(day>=min)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}