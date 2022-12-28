#include<stdio.h>
void main(){
	int n,i ,result=0;
	printf("Enter value of N = ");
	scanf("%d",&n);
	for(i = 1 ; i<=n ; i++){
		result = result + i;
	}
	printf("Your Ansewr  = %d",result);
}
