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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int first=v[0],last=v[n-1];
    if(first==last){
        int count=k-2;
        for(int i=1;i<n-1;i++){
            if(count<=0)break;
            if(v[i]==first)count--;
        }
        if(count<=0)yes
        else no
    }
    else{
        int i;
        int countFirst=k-1,countLast=k-1;
        for(i=1;i<n-1;i++){
            if(countFirst==0)break;
            if(v[i]==first)countFirst--;
        }
        for(;i<n-1;i++){
            if(countLast==0)break;
            if(v[i]==last)countLast--;
        }
        if(countFirst==0&&countLast==0)yes
        else no
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}