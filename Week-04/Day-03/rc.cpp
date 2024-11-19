#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int n;string s;
    cin>>n>>s;
    int zero=0,one=0;
    bool zeroF=true,oneF=true;
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&oneF){
            one++;
            oneF=false;
            zeroF=true;
        }
        else if(s[i]=='0'&&zeroF){
            zero++;
            zeroF=false;
            oneF=true;
        }
    }
    cout<<min(zero,one)<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}