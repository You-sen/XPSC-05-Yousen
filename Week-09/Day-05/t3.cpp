#include<bits/stdc++.h>
using namespace std;
long long LCM(long long a,long long b){
    return ((a/__gcd(a,b))*b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long x=(n/a)*p;
    long long y=(n/b)*q;
    long long overlap=(n/LCM(a,b));
    long long ans=((x+y)-(overlap*(p+q)))+(overlap*max(p,q));
    cout<<ans<<endl;
    return 0;
}