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
    string a,b;
    cin>>n>>a>>b;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]=='1')count1--;
            if(b[i]=='0')count2++;
        }
        else{
            if(a[i]=='1')count2--;
            if(b[i]=='0')count1++;
        }
    }
    if(count1>=0&&count2>=0)yes
    else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
/*
//solve 1
void solve(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    string na,nb;
    int countA1=0,countA2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            na+=a[i];
            countA1++;
        }
        else na+=b[i];
        if(na.back()=='0')countA1--;
    }
    for(int i=0;i<n;i++){
        if(i%2==0)nb+=b[i];
        else {
            nb+=a[i];
            countA2++;
        }
        if(nb.back()=='0')countA2--;
    }
    if(countA1<=0&&countA2<=0)yes
    else no
}
*/