#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    set<int>s;
    multiset<int>ms;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ms.insert(x);
    }
    int k=1;
    for(auto it:ms){
        if(it>=k){
            s.insert(k);
            k++;
        }
    }
    cout<<s.size()<<endl;
    return 0;
}