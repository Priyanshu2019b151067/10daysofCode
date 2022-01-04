// s = "cbaebabacd", p = "abc"
#include<bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p) {
    unordered_map<char,int> um;
    for(auto x : p)
    {
        um.find(x)!=um.end() ? um[x]++ : um[x] = 1;
    }    
    int count = um.size();
    vector<int> v;
    int i = 0;
    int j = 0;
    int k = p.size();

    while (j < s.size())
    {
        if(um.find(s[j])!=um.end())
        {
            um[s[j]]--;
            if(um[s[j]] == 0)
            {
                count = count -1;
            }
        }
        if(j - i +1 < k)
        {
            j++;
        }
        else if(j-i +1 ==k)
        {
            if(count == 0)
            {
                v.push_back(i);
            }
            if(um.find(s[i])!=um.end())
            {
                if(um[s[i]] == 0)
                {
                    um[s[i]] = 1;
                    count = count + 1;
                }
                else
                {
                    um[s[i]]++;
                }
            }
            i = i + 1;
            j = j + 1;
        }
        
    }
    return v;
    
}
int main()
{
    string s = "abab";
    string p = "ab";
    vector<int> v = findAnagrams(s,p);
    for(auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}