#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long x, y, k, xs, ys;
        cin>>x>>y>>k;
        xs=(x+k-1)/k;
        ys=(y+k-1)/k;
        cout<<max((2*xs-1),(2*ys))<<endl;
    }
    return 0;
}