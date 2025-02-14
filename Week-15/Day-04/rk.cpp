#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    string s;
    cin>>s;
    int len=s.size();
    int wholeCLength=INT_MAX;
    for(char c='a';c<='z';c++){
        int sameCLength=0,sameCLengthMax=0;
        for(int i=0;i<len;i++){
            if(s[i]!=c){
                sameCLength++;
            }
            else{
                sameCLengthMax=max(sameCLength,sameCLengthMax);
                sameCLength=0;
            }
            if(i==len-1){
                sameCLengthMax=max(sameCLength,sameCLengthMax);
            }
        }
        wholeCLength=min(wholeCLength,sameCLengthMax);
    }
    int ans=0;
    while(wholeCLength>0){
        ans++;
        wholeCLength/=2;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}