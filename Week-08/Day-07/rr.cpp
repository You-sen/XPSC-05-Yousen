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
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    map<char,int>h,r;
    for(auto x:mp){
        int each=x.second/2;
        mp[x.first]=x.second%2;
        if(each>0){
            h[x.first]=each;
            r[x.first]=each;
        }
    }
    for(auto x:mp){
        if(mp[x.first]>0){
            if((x.first=='N'&&mp['S']>0)||(x.first=='S'&&mp['N']>0)){
                h['N']++,h['S']++;
                mp['N']--,mp['S']--;
            }
            else if((x.first=='E'&&mp['W']>0)||(x.first=='W'&&mp['E']>0)){
                r['E']++,r['W']++;
                mp['E']--,mp['W']--;
            }
        }
    }
    for(auto x:mp){
        if(x.second!=0){
            no
            return;
        }
    }
    if(h.size()==0||r.size()==0){
        no
        return;
    }
    string order;
    for(int i=0;i<n;i++){
        if(h[s[i]]>0){
            order+='H';
            h[s[i]]--;
        }
        else{
            order+='R';
        }
    }
    cout<<order<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}