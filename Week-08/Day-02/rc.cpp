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
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    bool flag=true;
    set<int>s;
    int maxZeroDiff=abs(a[0]-b[0]);
    for(int i=0;i<n;i++){
        if(b[i]==0){
            maxZeroDiff=max(maxZeroDiff,abs(b[i]-a[i]));
            continue;
        }
        else if(b[i]>a[i]){
            flag=false;
            break;
        }
        else{
            s.insert(abs(a[i]-b[i]));
        }
    }
    if(s.size()>1)flag=false;
    else if(s.size()==1){
        if(maxZeroDiff>*s.begin()){
            flag=false;
        }
    }
    if(flag)yes
    else no
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}