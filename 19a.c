#include <stdio.h>

int main() {
      int arr[50],num,i,j,temp;

      printf("\n please enter the no of elements you want in array:");
      scanf("%d",&num);

      printf("please enter the elements of array :");
      for(i==0;i<num;i++);
      scanf("%d",&arr[i]);

      for(i=0;i<num-1;i++) {
        for(j=0;j<num-i-1;j++) {
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