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
    int zeros=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0)zeros++;
    }
    if(zeros==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    if(zeros==n){
        cout<<3<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<1<<" "<<n-2<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    vector<int>modify;
    vector<pair<int,int>>res;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(i==n-1){
                res.push_back({modify.size(),modify.size()+1});
            }
            else{
                res.push_back({modify.size()+1,modify.size()+2});
                modify.push_back(1);
                i++;
            }
        }
        else modify.push_back(1);
    }
    res.push_back({1,modify.size()});
    cout<<res.size()<<endl;
    for(auto x:res){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}