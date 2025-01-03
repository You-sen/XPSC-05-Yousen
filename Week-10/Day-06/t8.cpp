#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int caseNum=1;
    int n,q;
    while(true){
        cin>>n>>q;
        if(n==0&&q==0)break;
        vector<int>marbel(n);
        for(int i=0;i<n;i++)cin>>marbel[i];
        sort(marbel.begin(),marbel.end());
        cout<<"CASE# "<<caseNum++<<":"<<endl;
        while(q--){
            int k;
            cin>>k;
            int l=0,r=n-1,mid,index=0;
            bool flag=false;
            while(l<=r){
                mid=l+(r-l)/2;
                if(marbel[mid]==k){
                    flag=true;
                    index=mid+1;
                    r=mid-1;
                }
                else if(marbel[mid]<k){
                    l=mid+1;
                }
                else r=mid-1;
            }
            if(flag){
                cout<<k<<" found at "<<index<<endl;
            }
            else{
                cout<<k<<" not found"<<endl;
            }
        }
        
    }
    return 0;
}
/*
//2nd approach
//inside while 
auto it = lower_bound(marbel.begin(),marbel.end(),k);
            if (it == marbel.end() || *it != k)
                cout << k << " not found"<<endl;
            else
                cout << k << " found at " << (it - marbel.begin()) + 1 << endl;
*/