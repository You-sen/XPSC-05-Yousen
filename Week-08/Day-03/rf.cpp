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
    string s;
    vector<int>v(n),v2;
    for(int i=0;i<n;i++)cin>>v[i];
    s+='1';
    v2.push_back(v[0]);
    bool flag=true;
    
    for(int i=1;i<n;i++){
        if(flag&&v[i]>=v2.back()){
            s+='1';
            v2.push_back(v[i]);
        }
        else if(flag&&(v[i]<v2.back()&&v[i]<=v[0])){
            s+='1';
            flag=false;
            v2.push_back(v[i]);
        }
        else if(!flag&&(v[i]>=v2.back()&&v[i]<=v[0])){
            s+='1';
            v2.push_back(v[i]);
        }
        else s+='0';
    }cout<<s<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}