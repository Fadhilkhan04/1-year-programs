// sum of 2 nos using pointers
#include<stdio.h>

int main() {

  int n1,n2,sum;
  int *pnum1 ,*pnum2;
  printf("\n enter the 2 nos to be added:");
  scanf("%d %d",&n1,&n2);

  pnum1= &n1;
  pnum2= &n2;

  sum= *pnum1 + *pnum2;
  printf("\n the sum of the 2 nos are: %d",sum);

  return 1;
}