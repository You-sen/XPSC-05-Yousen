#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int x,y;
    cin>>x>>y;
    int minScreen=(y+1)/2;
    int free=(minScreen*15)-(y*4);

    if(free<x){
        int needSpace=x-free;
        minScreen+=((needSpace+15-1)/15);
    }
    //cout<<"->"<<endl;
    cout<<minScreen<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}