#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>vG[6];
    vector<string>vec={"BG","BR","BY","GR","GY","RY"};
    for(int i=0;i<n;i++){
        if(v[i]=="BG"){
            vG[0].push_back(i);
        }
        if(v[i]=="BR"){
            vG[1].push_back(i);
        }
        if(v[i]=="BY"){
            vG[2].push_back(i);
        }
        if(v[i]=="GR"){
            vG[3].push_back(i);
        }
        if(v[i]=="GY"){
            vG[4].push_back(i);
        }
        if(v[i]=="RY"){
            vG[5].push_back(i);
        }
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        set<char>st;
        for(int i=0;i<2;i++){
            st.insert(v[x][i]);
            st.insert(v[y][i]);
        }
        if(st.size()<4){
            cout<<abs(x-y)<<endl;
            continue;
        }
        if(y<x)swap(x,y);

        int l=-1,r=n;
        for(int i=0;i<6;i++){
            if(vec[i]==v[x]||vec[i]==v[y])continue;

            auto itL=lower_bound(vG[i].begin(),vG[i].end(),x);
            auto itU=upper_bound(vG[i].begin(),vG[i].end(),x);

            if(itL!=vG[i].begin()){
                itL--;
                l=max(l,*itL);
            }
            if(itU!=vG[i].end()){
                r=min(r,*itU);
            }
        }
        int ans=0;
        if(l==-1&&r==n)ans=-1;
        else if(l==-1)
            ans=abs(x-r)+abs(y-r);
        else if(r==n)
            ans=abs(x-l)+abs(y-l);
        else ans=min(abs(x-l)+abs(y-l),abs(x-r)+abs(y-r));
        
        cout<<ans<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}