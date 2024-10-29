#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,odd=0,even=0;
    vector<ll>ov;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        if(x%2==0) even+=x;
        else ov.push_back(x);
    }
    sort(ov.begin(),ov.end(),greater<int>());
    ll size=ov.size()%2==0?ov.size():ov.size()-1;
    for(int i=0;i<size;i++){
        even+=ov[i];
    }
    cout<<even<<endl;
    return 0;
}