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
    if(k<=(n+1)/2){
        cout<<2*k-1<<endl;
        return;
    }
    else{
        int total=(n+1)/2,power=2;
        while(power<=n){
            int numbers=n/power;
            total+=(numbers+1)/2;
            if(total>=k){
                int ith=(numbers+1)/2-(total-k);
                cout<<(2*ith-1)*power<<endl;
                return;
            }
            power*=2;
        }   
    
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}