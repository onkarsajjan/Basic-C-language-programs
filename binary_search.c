#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;
    else if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

int main(void) {
     int n=0,size,result,s_element;

     printf("Enter number of elements in an array : ");
     scanf("%d",&n);

     int arr[n];
     printf("Enter elements in an array : ");
     for(int i=0;i<n;i++)
          scanf("%d",&arr[i]);
     
     printf("Enter element which you want to search : ");
     scanf("%d",&s_element);

     size = sizeof(arr) / sizeof(arr[0]);
     result = binarySearch(arr, s_element, 0, size - 1);

     if (result == -1)
     printf("Data not found");
     else
     printf("Element is found at index %d", result);
     return 0;
}