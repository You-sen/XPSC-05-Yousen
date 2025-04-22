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
    int temp=n;
    while(temp){
        if(temp%10==7){
            cout<<0<<endl;
            return;
        }
        temp/=10;
    }
    int ans=9;
    for(int k=1;k<=9;k++){
        temp=n-k;
        int op=7;
        while(temp){
            cout<<"temp->"<<temp<<endl;
            int tem=(7-temp%10+10)%10;
            cout<<"to reach 7->"<<tem<<endl;
            op=min(op,(7-temp%10+10)%10);
            temp/=10;
            cout<<"to reach 7->"<<op<<endl;
        }
        if(op<=k){
            cout<<"op->"<<op<<" k->"<<k<<endl;
            cout<<"prev ans update "<<ans<<" now ans?->"<<k<<endl;
            ans=min(ans,k);
            cout<<"current ans->"<<ans<<endl;
        }
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}