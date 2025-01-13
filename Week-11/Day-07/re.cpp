#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    string s;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>res;
    res.push_back(v[n-1]);
    for(int i=n-2;i>=0;i--){
        if(v[i]>res.back()){
            res.push_back(v[i]%10);
            res.push_back(v[i]/10);
        }
        else
        res.push_back(v[i]);
    }
    reverse(res.begin(),res.end());
    //if(is_sorted(res.rbegin(),res.rend()))
    if(is_sorted(res.begin(),res.end()))
        yes
    else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}