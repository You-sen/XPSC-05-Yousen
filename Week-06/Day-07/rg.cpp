#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<vector<int>>vv;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    v.clear();
    for(auto it=mp.begin();it!=mp.end();){
        if(it->second<k){
            it=mp.erase(it);
        }
        else{
            v.push_back(it->first);
            ++it;
        }
    }
    if(v.empty()){
        minus
        return;
    }
    else{
        vector<int>temp;
        int l=0,r=0,maxSize=-1;
        for(int i=0;i<v.size();i++){
            temp.push_back(v[i]);
            if((v[i]+1!=v[i+1])||i==v.size()-1){
                vv.push_back(temp);
                temp.clear();
            }
        }
        for(int i=0;i<vv.size();i++){
            int vvSize=vv[i].size();
            if(vvSize>maxSize){
                l=vv[i][0];
                r=vv[i][vvSize-1];
                maxSize=vvSize;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}
int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false); cin.tie(0);
#define testCase int t = 1; cin >> t; while (t--)
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define minus cout << -1 << endl;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    vector<int> filtered;
    for (auto it = mp.begin(); it != mp.end();) {
        if (it->second >= k) {
            filtered.push_back(it->first);
            ++it;
        } else {
            it = mp.erase(it);
        }
    }

    if (filtered.empty()) {
        minus;
        return;
    }
    sort(filtered.begin(), filtered.end());
    int l = 0, r = 0, maxSize = 0, start = filtered[0], prev = filtered[0], currentSize = 1;
    for (int i = 1; i < filtered.size(); i++) {
        if (filtered[i] == prev + 1) {
            currentSize++;
        } else {
            if (currentSize > maxSize) {
                maxSize = currentSize;
                l = start;
                r = prev;
            }
            start = filtered[i];
            currentSize = 1;
        }
        prev = filtered[i];
    }
    if (currentSize > maxSize) {
        maxSize = currentSize;
        l = start;
        r = prev;
    }
    cout << l << " " << r << endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
*/