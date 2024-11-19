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
    int nv=(n*(n-1))/2;
    set<int>s;
    vector<int>v,rv;
    map<int,int>mp;
    for(int i=0;i<nv;i++){
        int x;
        cin>>x;
        s.insert(x);
        mp[x]++;
    }
    for(auto x:s)v.push_back(x);
    int occu=n-1;
    for(int i=0;i<v.size();i++){
        if(mp[v[i]]-occu>0){
            mp[v[i]]-=occu;
            rv.push_back(v[i]);
            occu--;
            i--;
        }
        else{
            mp[v[i]]-=occu;
            rv.push_back(v[i]);
            occu--;
        }
    }
    int rvB=rv.back();
    for(int i=0;i<n;i++){
        if(i>rv.size()-1)cout<<rvB<<" ";
        else cout<<rv[i]<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
/*
//code force
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int m=n*(n-1)/2;
        vector<int>b(m);
        for(int i=0;i<m;i++)cin>>b[i];
        sort(b.begin(),b.end());
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        cout<<b.back()<<endl;
    }
}

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
    int m=(n*(n-1))/2;
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b.begin(),b.end());
    for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
    cout<<b.back()<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
*/