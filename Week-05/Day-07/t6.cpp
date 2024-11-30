#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,m;
    cin>>n>>m;
    if(n>m){
        no
        return;
    }
    vector<int>v(n);
    int sum=0;
    if(n%2==0&&m%2==0){
        yes
        for(int i=0;i<n-2;i++){
            v[i]=1;
            sum++;
        }
        m=(m-sum)/2;
        v[n-1]=m,v[n-2]=m;
    }
    else if(n%2!=0){
        yes
        for(int i=0;i<n-1;i++){
            v[i]=1;
            sum++;
        }
        m=m-sum;
        v[n-1]=m;
    }
    else{
        no
        return;
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}