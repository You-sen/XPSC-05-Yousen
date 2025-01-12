#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;
    long long countB=0,countS=0,countC=0;
    for(long long i=0;i<s.size();i++){
        if(s[i]=='B')countB++;
        else if(s[i]=='S')countS++;
        else countC++;
    }
    vector<long long>iHave(3),pPrice(3);
    long long money=0;
    for(long long i=0;i<6;i++){
        if(i<3)cin>>iHave[i];
        else cin>>pPrice[i%3];
    }
    cin>>money;
    
    auto ok=[&](long long burgers){
        long long needB=max(0LL,(countB*burgers)-iHave[0]);
        long long needS=max(0LL,(countS*burgers)-iHave[1]);
        long long needC=max(0LL,(countC*burgers)-iHave[2]);

        long long total=(needB*pPrice[0])+(needS*pPrice[1])+(needC*pPrice[2]);
        return total<=money;

    };
    long long l=1,r=1e12+100,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}