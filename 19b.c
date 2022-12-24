#include <stdio.h>

int main(){
  int size,i,a;
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    int array[size];

    // Asking Elements from user
    for (i=0; i<size; i++) {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\n enter element to search:");
    scanf("%d",&a);
    
    for(i=0;i<size;++i)
        if(array[i]==a)break;

    if(i<size)
        printf("Element found at index %d",i);
    else
        printf("Element not found");

    return 0;

}