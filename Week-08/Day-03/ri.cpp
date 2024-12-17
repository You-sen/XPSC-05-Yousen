#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

ll calculation(vector<int>a,int n){
    ll total=0;
    int zeros=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==0){
            zeros++;
        }
        else{
            total+=zeros;
        }
    }
    return total;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll total=calculation(a,n);
    int pos=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            pos=i;
            break;
        }
    }
    total=max(total,calculation(a,n));
    if(pos!=-1)
        a[pos]=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            pos=i;
            break;
        }
    }
    total=max(total,calculation(a,n));
    cout<<total<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}