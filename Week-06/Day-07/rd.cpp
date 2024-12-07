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
    vector<int>v(n);
    int key=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        int diff=abs((i+1)-v[i]);
        if(diff!=0){
            key=__gcd(key,diff);
        }
    }
    cout<<key<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}