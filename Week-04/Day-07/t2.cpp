    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
     
        long long n;
        long long s;
        cin>>n>>s;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long l=0,r=0;
        long long sum=0,ans=INT_MAX;
        while(r<n){
            sum+=v[r];
            if(sum>=s){
                ans=min(ans,r-l+1);
                while(sum>=s&&l<=r){
                    sum-=v[l];
                    l++;
                    if(sum>=s)
                    ans=min(ans,r-l+1);
                }
            }
            r++;
        }
        if(ans==INT_MAX)cout<<-1<<endl;
        else
        cout<<ans<<endl;
        return 0;
    }