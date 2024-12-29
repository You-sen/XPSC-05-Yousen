#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int x,y,k;
    cin>>x>>y>>k;
    while(x>1&&k>0){
        int need=y-(x%y);
        if(need>=k){
            x+=k;
            k=0;
        }
        else{
            k-=need;
            x+=need;
        }
        while(x%y==0)x/=y;
    }
    if(k>0){
        k=k%(y-1);
        x+=k;
    }
    cout<<x<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}