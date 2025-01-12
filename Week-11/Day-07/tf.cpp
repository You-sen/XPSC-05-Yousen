#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,k;
    cin>>n>>k;
    auto ok=[&](ll mid){
        ll prefix=(mid*(mid+1)/2)-(k*(k-1)/2);
        ll suffix=((k+n-1)*(k+n)/2)-((mid+1)*(mid)/2);
        return prefix-suffix; 
    };
    ll l=k,r=k+n-1,mid,ans;
    while(l<r){
        mid=l+(r-l)/2;
        if(ok(mid)<0){
            l=mid+1;
            ans=l;
        }
        else r=mid;
    }
    cout<<min((abs(ok(ans))),(abs(ok(ans-1))))<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
/*
//1st approach
#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans=LONG_LONG_MAX;
    auto ok=[&](ll mid){
        ll prefix=(mid*(mid+1)/2)-(k*(k-1)/2);
        ll suffix=((k+n-1)*(k+n)/2)-((mid+1)*(mid)/2);
        //ans=min(ans,abs(prefix-suffix));
        return prefix-suffix; 

    };
    ll l=k,r=k+n-1,mid;
    while(l<=r){
        mid=l+(r-l)/2;
        ll temp=ok(mid);
        ans=min(ans,abs(temp));
        if(temp>0){
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
*/