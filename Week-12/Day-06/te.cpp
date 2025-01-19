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
    int count=0;
    for(int i=1;i<=n;i++){
        int temp=i;
        map<int,int>mp;
        for(int j=2;j*j<=temp;j++){
        while(temp%j==0){
            mp[j]++;
            temp/=j;
            }   
        }
        if(temp>1)mp[temp]++;
        if(mp.size()==2)count++;
    }
    cout<<count<<endl;
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}