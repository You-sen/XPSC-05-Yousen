#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> na(n);
    for(int i=0;i<n;i++){
        cin>>na[i];
    }
    int sereja=0,dima=0;
    int j=n-1;
    int turn=0;
    for(int i=0;i<=j;){
        if(turn%2==0){
            sereja+=max(na[i],na[j]);
            if(na[i]>na[j]) i++;
            else j--;
        }
        else{
            dima+=max(na[i],na[j]);
            if(na[i]>na[j]) i++;
            else j--;
        }
        turn++;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}