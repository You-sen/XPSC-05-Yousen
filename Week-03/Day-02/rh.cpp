#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>change;
        ll total=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                int myside=i-0;;
                int oppside=n-1-i;
                change.push_back(oppside-myside);
                total+=myside;
            }
            else{
                int myside=n-1-i;;
                int oppside=i-0;
                change.push_back(oppside-myside);
                total+=myside;
            }
        }
        sort(change.begin(),change.end(),greater<int>());
        for(auto x:change){
            if(total+x>total){
                total+=x;
            }
            cout<<total<<" ";
        }cout<<endl;
    }
    return 0;
}