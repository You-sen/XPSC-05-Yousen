#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    int i=1,ans=-1;
    while(true){
        if(c*i>b) break;
        if(c*i>=a&&c*i<=b){
            ans=c*i;
            //cout<<i<<endl;
            break;
        }
        i++;
    }cout<<ans<<endl;
    return 0;
}