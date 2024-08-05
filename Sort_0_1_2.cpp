#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int start=0,middle=0,end=n-1;
    while(middle<=end)
    {
      if (arr[middle] == 0) {
        swap(arr[start], arr[middle]);
        start++;
        middle++;
      }
      else if(arr[middle]==1)
      {
          middle++;
      }
      else{
          swap(arr[end],arr[middle]);
          end--;
      }
    }
}
