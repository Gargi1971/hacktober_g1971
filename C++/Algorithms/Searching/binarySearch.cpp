#include<bits/stdc++.h>
using namespace std;

/* It is a fast search algorithm, basically a divide and conquer algorithm and is applicable generally on sorted array/vector etc.
It first divides the given array into two parts about the middle element and search for the target in an optimised manner by reducing the search-space recursively.
It returns the index of the target ,if found in the array, and returns -1 otherwise.*/

//Binary search function
int binarySearch(int arr[],int start,int end,int target)
{
  if(start>end)  return -1;
  int mid=(start+end)/2;
  if(arr[mid]==target) return mid;
  if(arr[mid]<target) return binarySearch(arr,mid+1,end,target);
  return binarySearch(arr,start,mid-1,target);
}

int main()
{
  int arr[]={1,3,5,6,8,9};
  int target=8;
  int size=sizeof(arr)/sizeof(arr[0]);
  int result=binarySearch(arr,0,size-1,target);
  cout<<result<<endl;
  return 0;
}


output: 4


//Time Complexity- O(log N)
//Space Complexity- O(1)
