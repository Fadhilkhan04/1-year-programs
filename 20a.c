#include<stdio.h>
void sum(int n1,int n2){
   printf("\n sum of the numbers: %d",n1+n2);
}
int main(){
  int n1,n2;
  printf("\nEnter the two nos to add:");
  scanf("%d %d",&n1 ,&n2);
  sum(n1,n2);
  return 0;
}