#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    string a,b;
    cin>>a>>b;
    if(a[0]==b[0]){
        yes
        cout<<a[0]<<"*"<<endl;
    }
    else if(a.back()==b.back()){
        yes
        cout<<"*"<<a.back()<<endl;
    }
    else{
        for(int i=0;i<a.size()-1;i++){
            string temp=a.substr(i,2);
            if(b.find(temp)!=string::npos){
                yes
                cout<<"*"<<temp<<"*"<<endl;
                return;
            }
        }
        no
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}