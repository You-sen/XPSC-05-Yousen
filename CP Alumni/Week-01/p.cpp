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
    for(int i=0;i<n;i++)cin>>v[i];
    if(k==n){
        int ind=1;
        for(int i=1;i<n;i=i+2){
            if(v[i]!=ind){
                cout<<ind<<endl;
                return;
            }
            ind++;
        }
        cout<<ind<<endl;
        return;
    }
    int start=1,end=n-k+2;
    for(int i=start;i<end;i++){
        if(v[i]!=1){
            cout<<1<<endl;
            return;
        }
    }cout<<2<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}