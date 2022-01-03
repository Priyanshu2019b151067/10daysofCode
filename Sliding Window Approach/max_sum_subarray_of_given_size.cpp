#include<bits/stdc++.h>
using namespace std;
int max_sum_subarray(int arr[], int s, int k)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxi = INT_MIN;
    while (j<s)
    {
        sum += arr[j];
        if(j-i+1<k)
        {
            // increment the window size
            j++;
        }
        else if(j-i+1==k)
        {
            // do calculation
            maxi = max(sum,maxi);
            // decrement the current i value
            sum = sum - arr[i]; 
            //  maintain window size
            i = i +1;
            j = j +1;
        }
    }
    return maxi;
    
}
int main()
{
    int arr[] = {1,2,3,4,5,3,2,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    int k = 3;//window size 
    cout << max_sum_subarray(arr,s,k) << endl;
    return 0;
}