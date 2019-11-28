#include<iostream>
using namespace std;

int binarySearch(int arr[], int beg, int end, int x) 
{ 
    if (end>=beg) { 
        int mid = (beg+end) / 2; 
        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return binarySearch(arr, beg, mid - 1, x); 

        return binarySearch(arr, mid + 1, end, x); 
    } 

    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    if(result == -1)
        cout<<"Element is not present in array"; 
    else
        cout<<"Element is present at index "<<result;
                            
    return 0; 
} 