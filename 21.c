#include <stdio.h>
int fact(int f){
	if(f==1) return 1;
	return f*fact(f-1);
	}
int main(){
	int f;
	printf("enter the number to find the factorial of: ");
	scanf("%d",&f);
	printf("the factorial is: %d ",fact(f));
	return 0;


}
