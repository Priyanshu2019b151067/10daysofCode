#include<bits/stdc++.h>
using namespace std;
vector<int> first_negative_in_given_window_size(int arr[],int size,int k)
{
    int i=0;
    int j =0;
    queue<int> q;
    vector<int> v;
    while (j <  size)
    {
        // all calculation related to j
        if(arr[j] < 0)
        {
            q.push(arr[j]);
        }
        if(j-i+1 < k)
        {
            // increment window size
            j++;
        }
        else if(j-i+1 == k)
        {
            // do calculation
            q.size()==0 ? v.push_back(0):v.push_back(q.front());
            if(arr[i] == q.front())
            {
                q.pop();
            }
            // maintain window size
            i = i +1;
            j = j +1;
        }
    }
    return v;
    
}
int main()
{
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int size = sizeof(arr)/sizeof(int);
    int k = 3;
    vector<int> v = first_negative_in_given_window_size(arr,size,k);
    for(int  i = 0;i <v.size();i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}