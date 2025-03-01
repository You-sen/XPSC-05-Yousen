#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;
const int maxN=30000;
vector<int>allPrimes;
void sieve(){
    vector<bool>prime(maxN+1,true);
    for(int i=2;i*i<=maxN;i++){
        if(prime[i]){
            for(int j=i+i;j<=maxN;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<maxN;i++){
        if(prime[i])allPrimes.push_back(i);
    }
}
void solve(){
    int d;
    cin>>d;
    int ans=1,p1Ind=0;
    for(int i=0;i<allPrimes.size();i++){
        if(allPrimes[i]-1>=d){
            ans*=allPrimes[i];
            p1Ind=i;
            break;
        }
    }
    for(int i=p1Ind+1;i<allPrimes.size();i++){
        if(allPrimes[i]-allPrimes[p1Ind]>=d){
            ans*=allPrimes[i];
            break;
        }
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    sieve();
    testCase
    solve();
    return 0;
}