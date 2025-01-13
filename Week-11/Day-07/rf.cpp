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
    set<int>st;
    int total=INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    vector<int>v;
    for(auto x:st){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        int temp=v[i]+n;
        int pos=lower_bound(v.begin(),v.end(),temp)-v.begin();
        total=max(total,pos-i);
    }
    cout<<total<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}