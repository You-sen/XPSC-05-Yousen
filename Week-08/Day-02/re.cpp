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
    int i=0;
    while(s.size()<n){
        if(i==0){
            s+="aa";
            i=1;
        }
        else if(i==1){
            s+="bb";
            i=0;
        }
    }
    while(s.size()>n)s.pop_back();
    cout<<s<<endl;
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}