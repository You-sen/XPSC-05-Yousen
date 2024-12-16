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
    string s;
    cin>>s;
    int ans=INT_MAX;
    for(int i=0;i<26;i++){
        int l=0,r=s.size()-1,erased=0;
        bool flag=true;
        while(l<=r){
            if(s[l]==s[r]){
                l++,r--;
            }
            else if(s[l]==char(i+'a')){
                l++,erased++;
            }
            else if(s[r]==char(i+'a')){
                r--,erased++;
            }
            else{
                flag=false;
                break;
            }
        }
        if(!flag)continue;
        ans=min(ans,erased);
    }
    if(ans==INT_MAX)minus
    else cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}