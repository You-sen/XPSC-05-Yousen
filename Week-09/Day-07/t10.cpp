#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;
ll GCD(int a,int b){
    return __gcd(a,b);
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int maxV=*max_element(a.begin(),a.end());
    ll total=0,z=0;

    for(int i=0;i<n;i++){
        total+=maxV-a[i];
        int temp=maxV-a[i];
        z=GCD(z,temp);
    }
    cout<<total/z<<" "<<z<<endl;
}

int main() {
    fasterIO
    //testCase
    solve();
    return 0;
}