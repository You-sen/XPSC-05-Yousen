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
    string s2=s;
    reverse(s2.begin(),s2.end());
    s2+=s;
    cout<<min(s2,s)<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
//1st approach
/*
int l=0,r=s.size()-1;
    bool rev=false;
    while(l<=r){
        if(s[l]<s[r]){
            rev=false;
            break;
        }
        else if(s[l]>s[r]){
            rev=true;
            break;
        }
        l++,r--;
    }
    if(rev){
        string normal=s;
        reverse(s.begin(),s.end());
        cout<<s<<normal<<endl;
    }
    else cout<<s<<endl;
*/