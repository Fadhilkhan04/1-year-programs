#include<stdio.h>
int sum(){
  int n1,n2,s;
  printf("\nEnter the two nos to add:");
  scanf("%d %d",&n1 ,&n2);
  s=n1+n2; 
  return s;
}
int main(){
  int s=sum();
  printf("\n sum of the numbers: %d",s);
  return 0;
}