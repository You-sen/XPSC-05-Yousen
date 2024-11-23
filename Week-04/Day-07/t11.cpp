//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        map<int,int>m;
        m[0]=-1;
        int l=0,sum=0;
        int r=0;
        while(r<n){
            sum+=arr[r];
            if(m.find(sum-k)!=m.end()){
                l=max(l,r-m[sum-k]);
            }
            if(m.find(sum)==m.end()){
                m[sum]=r;
            }
            r++;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
