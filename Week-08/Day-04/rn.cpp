#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int row=8,col=8;
    vector<char>vcol(col);
    vector<vector<char>>v(row,vcol);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j]!='R')break;
            else if(j==col-1&&(v[i][col-1]=='R')){
                cout<<"R"<<endl;
                return;
            }
        }
    }
    cout<<"B"<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}