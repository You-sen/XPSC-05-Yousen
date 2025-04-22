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
    vector<string>v(n); 

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='0')continue;
            bool flag=true;
            for(int k=0;k<i;k++){
                if(v[k][j]=='0')flag=false;
            }
            if(flag)continue;
            flag=true;
            for(int k=0;k<j;k++){
                if(v[i][k]=='0')flag=false;
            }
            if(!flag){
                no return;
            }
        }
    }
    yes
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
