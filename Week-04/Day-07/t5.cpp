#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=0;
    long long ans=0;
    map<int,int>count;
    while(r<n){
        count[v[r]]++;
        while(count.size()>k){
            count[v[l]]--;
            if(count[v[l]]==0){
                count.erase(v[l]);
            }
            l++;
        }
        ans+=r-l+1;
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
//approach 1
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=0;
    long long ans=0;
    map<int,int>count;
    while(r<n){
        count[v[r]]++;
        if(count.size()<=k){
            ans+=r-l+1;
        }
        else{
            while(count.size()>k){
                count[v[l]]--;
                if(count[v[l]]==0){
                    count.erase(v[l]);
                }
                l++;
                if(count.size()<=k){
                ans+=r-l+1;
                }
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
*/