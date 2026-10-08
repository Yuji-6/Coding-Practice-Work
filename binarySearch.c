#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};

    int target = 0;
    printf("Please enter the target element you want to find\n");
    int s1 = scanf(" %d", &target);
    if (s1 <= 0)
    {
        printf("Please enter valid input!!");
        return 0;
    }

    int low = 0, high = 7;

    while (low <= high)
    {
      int mid = (low + high)/2;
      int middleElement = arr[mid];

      if (target == middleElement)
      {
        printf("Target Element found within array");
        return 0;
      }else if (target > middleElement)
      {
        low = mid + 1;
      }else if (target < middleElement)
      {
        high = mid - 1;
      }
    }
    printf("Target Element not found T_T");
    return 0;
}