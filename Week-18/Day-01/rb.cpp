#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int start = max(1, n - k + 1);
        long long sum = ((n * (n + 1))/2) - (((start - 1) * start) / 2);
        cout<<(sum%2==0?"YES":"NO")<<endl;
    }
    return 0;
}