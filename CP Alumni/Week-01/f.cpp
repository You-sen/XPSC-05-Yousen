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
    vector<bool>prime(n+1,true);
    vector<int>primes;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i+i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        while(!primes.empty()&&primes.back()*i>n)primes.pop_back();
        ans+=primes.size();
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}