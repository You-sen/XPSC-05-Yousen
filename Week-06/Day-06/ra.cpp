#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n, first = 0;
        cin >> n;
        bool f = true;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if (f && i > 0 && a[i] < a[i - 1])
            {
                first = i;
                f = false;
            }
        }
        for (int i = first; i < n; i++)
        {
            b.push_back(a[i]);
        }
        for (int i = 0; i < first; i++)
        {
            b.push_back(a[i]);
        }
        sort(a.begin(), a.end());
        if(a==b)yes
        else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}