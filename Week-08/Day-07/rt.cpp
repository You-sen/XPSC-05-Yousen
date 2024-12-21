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
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<m;j++){
            if(v[i][j]!='*')continue;
            else{
                int k=i;
                while(k+1<n&&v[k+1][j]=='.'){
                    swap(v[k][j],v[k+1][j]);
                    k++;
                }
            }
            
        }
    }
    //cout<<"PRINTING"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }cout<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}