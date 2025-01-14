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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    auto ok=[&](int stages){
        multiset<int>ms;
        for(auto x:v)ms.insert(x);
        for(int i=0;i<stages;i++){
            if(ms.empty())return false;
            int need=stages-i;
            auto pos=ms.upper_bound(need);
            if(pos==ms.begin())return false;
            pos--;
            ms.erase(pos);
            if(!ms.empty()){
                pos=ms.begin();
                ms.insert(*pos+need);
                ms.erase(pos);
            }
        }
        return true;
    };
    int l=1,r=n,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
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