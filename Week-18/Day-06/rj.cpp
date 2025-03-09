#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,d,k;
    cin>>n>>d>>k;
    vector<pair<int,int>>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>>pq;
    int j=0;
    int maxV=INT_MIN,maxI,minV=INT_MAX,minI;
    for(int i=1;i<=n-d+1;i++){
        while(j<k&v[j].first<=i+d-1){
            pq.push(v[j].second);
            j++;
        }
        while(pq.size()&&pq.top()<i){
            pq.pop();
        }
        int sz=pq.size();
        if(sz>maxV){
            maxV=sz,maxI=i;
        }
        if(sz<minV){
            minV=sz,minI=i;
        }
    }
    cout<<maxI<<" "<<minI<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}