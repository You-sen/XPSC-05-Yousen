#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, maxS = 0;
        char c, g = 'g';
        string s;
        cin >> n >> c >> s;
        map<char, set<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]].insert(i);
        }
        for (auto val : mp[c]) {
            auto lower = mp[g].lower_bound(val);
            int diff;
            if (lower != mp[g].end()) {
                diff = *lower - val;
            } else {
                diff = n - val + *mp[g].begin();
            }
            maxS = max(maxS, diff);
        }
        cout << maxS << endl;
    }
    return 0;
}
//my 1st approach but slightly wrong
/*
include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,maxS=0;
        char c,g='g';
        string s;
        cin>>n>>c>>s;
        map<char,set<int>>mp;
        for(int i=0;i<n;i++){
            mp[s[i]].insert(i+1);
        }
        for(auto val:mp[c]){
            auto upper=mp[g].lower_bound(val);
            int diff=*upper-val;
            if(upper==mp[g].end()){
                upper=mp[g].lower_bound(n-val);
                diff=*upper-(0-(n-val));
            }
            
            maxS=max(maxS,diff);
        }
        cout<<maxS<<endl;
    }
    return 0;
}*/ 
//codeforce approach
/*#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,maxS=0,save;
        char c,g='g';
        string s;
        cin>>n>>c>>s;
        s+=s;
        if(c==g)cout<<0<<endl;
        else{
            for(int i=2*n-1;i>=0;i--){
            if(s[i]==g) save=i;
            else if(s[i]==c&&i<n){
                maxS=max(maxS,save-i);
            }
        }
        cout<<maxS<<endl;
        }
    }
    return 0;
}*/