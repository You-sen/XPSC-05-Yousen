#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m),ans;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int i=0,j=0;
    while(i<n||j<m){
        if(i<n&&j<m){
            if(a[i]==0){
                ans.push_back(0);
                i++,k++;
            }
            else if(b[j]==0){
                ans.push_back(0);
                j++,k++;
            }
            else{
                if(a[i]<b[j]&&a[i]<=k){
                    ans.push_back(a[i]);
                    i++;
                }
                else if(b[j]<=a[i]&&b[j]<=k){
                    ans.push_back(b[j]);
                    j++;
                }
                else{
                    minus return;
                }
            }
        }
        else if(i<n){
            if(a[i]==0){
                ans.push_back(0);
                i++,k++;
            }
            else{
                if(a[i]<=k){
                    ans.push_back(a[i]);
                    i++;
                }
                else{
                    minus return;
                }
            }
        }
        else if(j<m){
            if(b[j]==0){
                ans.push_back(0);
                j++,k++;
            }
            else{
                if(b[j]<=k){
                    ans.push_back(b[j]);
                    j++;
                }
                else{
                    minus return;
                }
            }
        }
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}