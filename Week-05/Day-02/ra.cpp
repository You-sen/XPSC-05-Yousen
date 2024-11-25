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
    if(n%2!=0)no
    else{
        yes
        for(int i=0;i<n;i++){
            if(i>0&&i%2==0)cout<<"B";
            cout<<"A";
        }cout<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}