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
    int matr=n*n;
    vector<int>v;
    int st1=0,st2=1;
    for(int i=0;i<matr;i++){
        if(i%2!=0){
            v.push_back(st2);
            st2++;
        }
        else{
            v.push_back(matr-st1);
            st1++;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<v[j+(i*n)]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<v[j+(i*n)]<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}