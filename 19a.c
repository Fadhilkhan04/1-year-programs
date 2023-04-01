#include <stdio.h>

int main() {
      int num,i,j,temp;

      printf("\n please enter the no of elements you want in array:");
      scanf("%d",&num);
      int arr[num];

      
      for(i=0;i<num;i++){
        printf("please enter the elements of array %d:", i+1);
        scanf("%d",&arr[i]);
      }

      for(i=0;i<num-1;i++) {
        for(j=0;j<num-1;j++) {
          if(arr[j]>arr[j+1]) {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }

      }
      printf("array after implementing bubble sort:");
      for(i=0;i<num;i++) {
        printf("%d ",arr[i]);
      }
      return 0;

      
}