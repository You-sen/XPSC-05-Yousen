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
    /*
    //way 1
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            if(k==0)break;
            if(s[i]>s[j]){
                swap(s[i],s[j]);
                k--;
            }
        }
    }
    
    string sr=s;
    reverse(sr.begin(),sr.end());
    if(s<sr)yes
    else no
    */
    string sr=s;
    reverse(sr.begin(),sr.end());
    if(k==0){
        if(s<sr)yes
        else no
        return;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(s[0]==s[i])count++;
    }
    if(count==n)no
    else yes

}


int main() {
    fasterIO
    testCase
    solve();
    return 0;
}