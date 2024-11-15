#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        long long sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=abs(x);
            if(x==0)continue;
            else v.push_back(x);
        }
        int l=0,r=0,count=0;
        bool rmet=false;
        while(r<v.size()){
            if(v[l]<0&&!rmet){
                count++;
                rmet=true;
            }
            else if(v[r]>0){
                rmet=false;
                l=r+1;
            }
            r++;
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;
}