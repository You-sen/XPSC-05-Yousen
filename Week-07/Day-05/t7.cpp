#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

ll fact(int n)
{
    if(n==0)
    return 1;
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
void solve(){
    string s,t;
    cin>>s>>t;
    int finalPos=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+')finalPos++;
        else finalPos--;
    }
    int currPos=0,canMove=0;
    for(int i=0;i<t.size();i++){
        if(t[i]=='?'){
            canMove++;
            continue;
        }
        if(t[i]=='+')currPos++;
        else currPos--;
    }
    int haveToMove=abs(finalPos-currPos);
    if(haveToMove>canMove||(haveToMove-canMove)%2!=0){
        double ans=0.0;
        cout<<setprecision(10)<<ans<<endl;
    }
    else{
        int totalProbability=1LL<<canMove;
        ll c=nCr(canMove,haveToMove+(canMove-haveToMove)/2);
        double ans=(c*1.0)/totalProbability;
        cout<<setprecision(10)<<ans<<endl;
    }
}
int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}