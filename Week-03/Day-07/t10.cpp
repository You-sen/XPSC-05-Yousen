//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char,int>patM,txtM;
	    int window=pat.size();
	    for(int i=0;i<window;i++){
	        patM[pat[i]]++;
	    }
	    int l=0,r=0,count=0;
	    while(r<txt.size()){
	        txtM[txt[r]]++;
	        if(r-l+1==window){
	            if(patM==txtM)count++;
	            txtM[txt[l]]--;
	            if(txtM[txt[l]]==0){
                    txtM.erase(txt[l]);
                }
	            l++;
	        }
	            r++;
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends