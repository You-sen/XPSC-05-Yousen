#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    int ans=0,count=1;
    while(ans-n!=k){
        ans+=count;
        count++;
        n--;
    }
    cout<<n<<endl;
    return 0;
}