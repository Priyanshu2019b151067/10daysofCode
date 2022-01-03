#include<bits/stdc++.h>
using namespace std;
int area_of_overlap_rect(int L1[],int L2[] , int R1[] , int R2[])
{
    int width  = min(R2[0],R1[0]) - max(L1[0],L2[0]);
    if(width <= 0)
        return 0;
    int height = min(L2[1],L1[1]) - max(R1[1],R2[1]);
    if(height <=0)
        return 0;
    return width * height;

}   

int main()
{

  int  L1[]= {0,10};
  int  R1[]= {10,0 };
  int  L2[]=  {5,5};
  int R2[] = {15,0};
  cout  << area_of_overlap_rect(L1,L2,R1,R2) << endl;
    return 0;
}