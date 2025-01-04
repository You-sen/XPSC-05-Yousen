#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;
    int n=s.size();
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int odds=0;
    for(auto x:mp){
        if(x.second%2!=0)odds++;
    }
    if((n%2==0&&odds!=0)||(n%2!=0&&odds!=1)){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string res,single="";
        for(auto x:mp){
            if(x.second%2!=0){
                for(int i=0;i<x.second;i++)single+=x.first;
            }
            else{
                for(int i=0;i<x.second/2;i++){
                    res+=x.first;
                }
            }
        }
        string reversed=res;
        reverse(res.begin(),res.end());
        if(single.size()==0){
            cout<<reversed+res<<endl;
        }
        else{
            cout<<reversed+single+res<<endl;
        }
    }
    return 0;
}