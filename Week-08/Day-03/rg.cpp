#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n),x(q);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<q;i++)cin>>x[i];
    int min=INT_MAX;
    vector<int>ex;
    ex.push_back(x[0]);
    for(int i=1;i<q;i++){
        if(x[i]<ex.back())ex.push_back(x[i]);
    }
    for(int i=0;i<ex.size();i++){
        for(int j=0;j<n;j++){
            if(a[j]%(1<<ex[i])==0){
                a[j]+=(1<<ex[i]-1);
            }
        }
    }
    for(auto v:a)cout<<v<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}