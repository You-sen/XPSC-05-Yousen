#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    while (k--) {
        int l, r;
        cin >> l >> r;
        int startI = lower_bound(v.begin(), v.end(), l) - v.begin();
        int endI = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << (endI - startI) << " ";
    }
    cout << endl;
    return 0;
}
