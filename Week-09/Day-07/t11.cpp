#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int l,r;
    cin>>l>>r;
    if(r<=3){
        minus
        return;
    }
    else{
        if(l<r){
            if(r%2!=0)r--;
            cout<<2<<" "<<r-2<<endl;
        }
        else{
            vector<int>divisors;
            for(int i=2;i*i<=l;i++){
                if(divisors.size()>1)break;
                if(l%i==0){
                    divisors.push_back(i);
                    if(i!=l/i)divisors.push_back(l/i);
                }
            }
            if(divisors.size()==0){
                minus
                return;
            }
            else{
                cout<<divisors[0]<<" "<<l-divisors[0]<<endl;
            }
        }
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}