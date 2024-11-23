#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ssize=s.size();
        vector<int>v(ssize);
        vector<pair<int,int>>serial;
        vector<int>seq;
        for(int i=0;i<ssize;i++){
            v[i]=s[i]-96;
        }
        int minV=min(v[0],v[ssize-1]),maxV=max(v[0],v[ssize-1]);
        for(int i=0;i<ssize;i++){
            if(v[i]>=minV&&v[i]<=maxV){
                serial.push_back({v[i],i});
            }
        }
        sort(serial.begin(),serial.end(),[](const pair<int,int>&a,const pair<int,int>&b) {
        return a.second < b.second;
        });
        if(serial.size()>2){
            sort(serial.begin()+1,serial.begin()+serial.size()-1,[&](const pair<int,int>&a,const pair<int,int>&b){
                if(v[0]>v[ssize-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; 
            });
        }
        for(int i=0;i<serial.size();i++){
            seq.push_back(serial[i].second+1);
        }
        cout<<abs(minV-maxV)<<" "<<seq.size()<<endl;
        for(auto x:seq){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}