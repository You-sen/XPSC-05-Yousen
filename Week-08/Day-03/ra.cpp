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
    stack<char>st;
    int count=0;
    //st.push(s[0]);
    for(int i=0;i<n;i++){
        if(st.empty()||s[i]==st.top())st.push(s[i]);
        else if(s[i]!=st.top()&&!st.empty()){
            st.pop();
            count++;
        }
    }
    if(count%2==0)cout<<"Ramos"<<endl;
    else cout<<"Zlatan"<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}