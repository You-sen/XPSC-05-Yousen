#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

const int sz=501;
vector<vector<int>>a(sz,vector<int>(sz, 0)); 
int need=0,n;

void res(int row,int col,int val){
    if(row<0||col<0||row>=n||col>=n||a[row][col]!=0||need==0)return;

    need--;
    a[row][col]=val;
    res(row+1,col,val);
    res(row,col-1,val);
}
void solve(){
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=n-1;i>=0;i--){
        need=v[i];
        res(i,i,v[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}