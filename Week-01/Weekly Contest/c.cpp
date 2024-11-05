#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> na(n);
        for(int i=0;i<n;i++){
            na[i]=pow(2,i+1);
        }
        int sum1=0,sum2=0;
        for(int i=0;i<n-x;i++){
            sum1+=na[i];
        }
        for(int i=n-x;i<n;i++){
            sum2+=na[i];
        }
        cout<<sum2-sum1<<endl;
    }
    return 0;
}