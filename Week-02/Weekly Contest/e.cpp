#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool f=false;
        vector<int>v(n);
        long long total=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            total+=v[i];
        }
        
        if(total<n||(k==0&&(total%n!=0))){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}