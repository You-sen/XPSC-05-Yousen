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
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        int pos=0;
        for(int j=i+1;j<n;j++){
            if(s[i][j]=='1')pos++;
        }
        for(int j=n-1;j>=0;j--){
            if(ans[j]==-1){
                if(pos==0){
                    ans[j]=i+1;
                    break;
                }
                pos--;
            }
        }
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}