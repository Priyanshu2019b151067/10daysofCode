#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int l = 0;
        unordered_map<char,int> um;
        while(j < s.size())
        {
            if(um.find(s[j])!=um.end())
            {
                if(um[s[j]] >= i)
                {
                    i = um[s[j]] +1;
                }
                
            }
            um[s[j]] = j;
            l = max(l,j - i +1);
            j++;
        }
        return l;
    }
};
