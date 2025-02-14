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
    string s;
    cin>>s;
    int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B')b++;
    }
    int index;
    char c;
    if(b==k){
        cout<<0<<endl;
        return;
    }
    else if(b<k){
        int need=k-b;
        c='B';
        for(int i=0;i<n;i++){
            if(s[i]=='A')need--;
            if(need==0){
                index=i+1;
                break;
            }
        }
    }
    else{
        int need=b-k;
        c='A';
        for(int i=0;i<n;i++){
            if(s[i]=='B')need--;
            if(need==0){
                index=i+1;
                break;
            }
        }
    }
    cout<<1<<endl<<index<<" "<<c<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}