// [1,3,-1,-3,5,3,6,7], k = 3
// ans  3 3 5 3 6 7 
#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int i =0;
    int j = 0;
    list<int> l;
    vector<int> v;
    while (j < nums.size())
    {
        while(l.size() > 0 && nums[j] > l.back())
        {
            l.pop_back();
        }
        l.push_back(nums[j]);
        if(j-i+1<k)
        {
            j++;
        }
        else if(j -i +1 ==k)
        {
            v.push_back(l.front());
            if(nums[i] == l.front())
            {
                l.pop_front();           
            }
            i++;
            j++;
        }
    }
    return v;
}
int main()
{
    vector<int> v = {1};
    int k  = 1;
    vector<int> x  = maxSlidingWindow(v,k);
    for(auto  a: x)
    {
        cout << a <<" ";
    }

    return 0;
}