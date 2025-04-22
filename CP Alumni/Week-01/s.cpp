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
    if(n==1){
        cout<<1<<endl<<1<<endl;
        return;
    }
    if(k==1||k==n){
        minus return;
    }
    int snd=k%2==0?k:k-1;
    int trd=k%2==0?k+1:k+2;
    cout<<3<<endl;
    cout<<1<<" "<<snd<<" "<<trd<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}