#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int totalColumn=0;
    totalColumn=k/n;
    if(k%n>0)totalColumn++;//celling
    int freeSpace=m-totalColumn;
    int minBench=(totalColumn+(freeSpace+1)-1)/(freeSpace+1);//celling
    //freeSpace+1 means these number of free space will create extra one segment. means 2 freespace will have 3 segment around it
    cout<<minBench<<endl;
    //suppose my total need column is 14 and i have 2 free space which will have 3 segment. so in these three segment i will have 14/3=4.6~5 length
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}