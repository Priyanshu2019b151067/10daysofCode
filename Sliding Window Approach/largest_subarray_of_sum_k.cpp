#include<bits/stdc++.h>
using namespace std;
int largest_subarray_of_sum(vector<int> &nums, int k)
{
      int i = 0;
        int j = 0;
        int sum = 0;
        int l = 0;
        while(j < nums.size())
        {
            sum += nums[j];
            while(sum > k)
            {
                sum = sum - nums[i];
                i++;
            }
            if(sum == k)
            {
                l = max(l,j-i +1);
                sum = sum - nums[i];
                i++;
            }
            j++;
        }
        return l;
}
int main()
{
    vector<int> v= {4,1,1,1,2,3,5};
    int k = 5;
    cout << largest_subarray_of_sum(v,k); 
}