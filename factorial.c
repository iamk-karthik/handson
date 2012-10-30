#include<stdio.h>
int factorial(int n){
	int i=1,result=1;
	for(;i<=n;i++)
		result*=i;	
	return result;
}
int main(){
	int fact;
	printf("Enter the number to get factorial\t");
	scanf("%d",&fact);
	printf("\nThe factorial of %d is %d",fact,factorial(fact));
	return;
}
