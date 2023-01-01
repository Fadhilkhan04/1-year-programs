#include<stdio.h>
int main(){
  int size,i,j,temp;

  printf("\nEnter size of array: ");
  scanf("%d", &size);

  int array[size];
  int array[i];
  int arr[j+1];
  int array[j];


  // Asking Elements from user
  for (i=0; i<size; i++) {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &array[i]);
    }
  
  for(i=0;i<size-1;i++)
    for(j=0;j<size-i-1;j++){
      if(array[j]>arr[j+1]){
        temp=arr[j];
        array[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
 
  printf("array after implementing bubble sort:");
  for(i=0;i<size;i++){
    printf("%d",array[i]);
  }
  return 0;
}