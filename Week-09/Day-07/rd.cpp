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
    string s;
    cin>>n>>s;
    vector<int>v(n,0);
    int value=1;
    for(int i=0;i<n;i++){
        if(s[i]!='p')continue;
        int j=i;
        while(j>=0&&v[j]==0){
            v[j]=value;
            value++;
            j--;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]==0){
            v[i]=value;
            value++;
        }
    }
    int maxV=0;
    for(int i=n-1;i>=0;i--){
        maxV=max(maxV,v[i]);
        if(s[i]=='s'){
            int length=n-i;
            if(length!=maxV){
                no
                return;
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