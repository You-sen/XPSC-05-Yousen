#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=0;
        
        vector<long long>xa(n);
        for(long long i=0;i<n;i++){
            cin>>xa[i];
            ans+=xa[i];
        }
        sort(xa.begin(),xa.end());
        double avrWealth=ans/n;
        long long poor=0;
        long long gold=0;
        for(long long i=0;i<n;i++){
            if(xa[i]<avrWealth/2) poor++;
        }
        if(poor<(n/2)+1){
            //also works
            //poor<=(n/2)
            gold=(xa[n/2]*(n*2))-ans+1;
        }
        if(n<=2) cout<<-1<<endl;
        else{
            cout<<(gold<0?0:gold)<<endl;
        }
    }
    return 0;
}