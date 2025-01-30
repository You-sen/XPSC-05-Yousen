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
    vector<int>v(n+1,0);
    int l=1,h=n;
    for(int i=1;i<=k;i++){
        for(int j=i;j<=n;j+=k){
            if(i%2!=0){
                v[j]=l++;
            }
            else v[j]=h--;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}