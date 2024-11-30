#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,XOR=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            XOR^=a[i];
        }
        if(n%2!=0){
            cout<<XOR<<endl;
        }
        else if(n%2==0&&XOR==0){
            cout<<24<<endl;
        }
        else cout<<-1<<endl;

    }
    return 0;
}