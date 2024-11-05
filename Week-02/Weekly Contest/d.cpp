#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        long long aw=0,bw=0,draw=0;
        for(long long i=0;i<n;i++){
            if(a[i]==b[i]) draw++;
            else if((a[i]=='R'&&b[i]=='S')||(a[i]=='P'&&b[i]=='R')||(a[i]=='S'&&b[i]=='P'))aw++;
            else bw++;
        }
        long long minW=(n/2)+1;
        long long minW2=((aw+bw)/2)+1;
        minW=minW-aw;
        minW2=minW2-aw;
        if(aw>bw)cout<<0<<endl;
        else{
            if(minW<minW2)cout<<minW<<endl;
            else cout<<minW2<<endl;
        }
    }
    return 0;
}