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
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    auto ok=[&](int time){
        int count=1,l=0;
        for(int r=0;r<n;r++){
            if(a[r]-a[l]>2*time){
                l=r;
                count++;
            }
        }
        return count<=3;
    };
    int l=0,r=1e9,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}