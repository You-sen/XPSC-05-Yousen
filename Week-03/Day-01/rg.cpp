#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char lastA=a[a.size()-1],lastB=b[b.size()-1];
        if(lastA==lastB){
            if(a.size()==b.size())cout<<"="<<endl;
            else if(lastA=='S'){
                if(a.size()>b.size())cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
            else if(lastA=='L'){
                if(a.size()>b.size())cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
        }
        else
            cout<<(lastA<lastB?">":"<")<<endl;
    }
    return 0;
}