#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int>nv(n);
    for(int i=0;i<n;i++){
        cin>>nv[i];
        nv[i]+=i+1;
    }
    sort(nv.begin(),nv.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(c-nv[i]>=0){
            count++;
            c-=nv[i];
        }
        else break;
    }
    cout<<count<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}