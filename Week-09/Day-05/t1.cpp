#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n,k;
    cin>>n>>k;
    vector<long long>v;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
            if(i==n/i)v.pop_back();
        }
    }
    long long sizeV=v.size();
    sort(v.begin(),v.end());
    if(sizeV<k)cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
    return 0;
}