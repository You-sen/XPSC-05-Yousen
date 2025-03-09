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
    string s;
    cin>>s;
    vector<int>oddAfter(26,0),evenAfter(26,0),oddBefore(26,0),evenBefore(26,0);
        for(int i=0;i<n;i++){
            int ind=s[i]-'a';
            if(i%2==0){
                evenAfter[ind]++;
            }
            else oddAfter[ind]++;
        }
    if(n%2==0){
        int maxOdd=*max_element(oddAfter.begin(),oddAfter.end());
        int maxEven=*max_element(evenAfter.begin(),evenAfter.end());
        cout<<n-maxOdd-maxEven<<endl;
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int delI=s[i]-'a';
        if(i%2==0){
            evenAfter[delI]--;
        }
        else{
            oddAfter[delI]--;
        }
        int maxEven=0,maxOdd=0;
        for(int j=0;j<26;j++){
            int count=oddBefore[j]+evenAfter[j];
            maxOdd=max(maxOdd,count);
        }
        for(int j=0;j<26;j++){
            int count=evenBefore[j]+oddAfter[j];
            maxEven=max(maxEven,count);
        }
        ans=min(ans,n-maxOdd-maxEven);
        if(i%2==0){
            evenBefore[delI]++;
        }
        else{
            oddBefore[delI]++;
        }
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}