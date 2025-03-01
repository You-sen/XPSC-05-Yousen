#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

int op=0;
vector<int>v;
void dfs(int s1l,int s1r,int s2l,int s2r){
    int s1Max=*max_element(v.begin()+s1l,v.begin()+s1r);
    int s2Min=*min_element(v.begin()+s2l,v.begin()+s2r);
    if(s1Max>s2Min){
        int j=s2l;
        op++;
        for(int i=s1l;i<=s1r;i++){
            swap(v[i],v[j]);
            j++;
        }
    }
    if(s1l==s1r)return;
    
    int mid1=(s1l+s1r)/2;
    dfs(s1l,mid1,mid1+1,s1r);
    int mid2=(s2l+s2r)/2;
    dfs(s2l,mid2,mid2+1,s2r);
}
void solve(){
    int n;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];
    op=0;
    if(is_sorted(v.begin(),v.end())){
        cout<<op<<endl;
        return;
    }
    int mid=n/2;
    dfs(0,mid-1,mid,n-1);
    if(is_sorted(v.begin(),v.end())){
        cout<<op<<endl;
    }
    else minus
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}