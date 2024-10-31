    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
     
        int t;
        cin>>t;
        while(t--){
            string s;
            bool f=true;
            cin>>s;
     
            for(int i=0;i<s.size();i++){
                if(f && i>0 && (s[i-1]==s[i])){
                    f=false;
                    cout<<(s[i]=='z'?char(s[i]-1):char(s[i]+1));
                }
                cout<<s[i];
            }
            if(f) cout<<(s[s.size()-1]=='z'?char(s[s.size()-1]-1):char(s[s.size()-1]+1));
            cout<<endl;
        }
        return 0;
    }