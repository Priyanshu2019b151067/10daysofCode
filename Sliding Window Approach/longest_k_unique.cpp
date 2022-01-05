// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
     int i =0;
     int j = 0;
     int maxi = -1;
     int count  =0;
     unordered_map<char,int> um;
     while(j < s.size())
     {
         if(um.find(s[j])!=um.end())
         {
             if(um[s[j]]==0)
             {
                 count++;
             }
             um[s[j]]++;
             
         }
         else
         {
             um[s[j]] =1;
             count++;
         }
         if(count == k)
         {
             maxi = max(maxi,j -i +1);
         }
         else if(count > k)
         {
            while(count > k)
            {
                um[s[i]]--;
                if(um[s[i]]==0)
                {
                    count--;
                }
                i++;
            }
         }
         j++;
     }
     return maxi;
     
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends