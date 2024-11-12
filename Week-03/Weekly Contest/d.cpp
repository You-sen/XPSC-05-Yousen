//approach 1
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
        vector<int>v(n);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0)count++;
        }
        int first=0;
        for(int i=0;i<n;i++){
            if(v[i]<0) first++;
            else if(v[i]>0) break;
        }
        int second=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]<0) second++;
            else if(v[i]>0) break;
        }
        cout<<max(count-(first+second),0)<<endl;
    }
    return 0;
}
/*
//approach 2
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int f=-1,l=-1;
        for(int i=0;i<n;i++){
            if(v[i]>0){
                f=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>0) l=i;
        }
        if(f==-1)cout<<0<<endl;
        else{
            int c=0;
            for(int i=f;i<=l;i++){
                if(v[i]<0) c++;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}*/