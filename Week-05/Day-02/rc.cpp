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
    string a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i]&&b[i]!=c[i]){
                flag=true;
                break;
            }
        }
    if(flag)yes
    else no;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}