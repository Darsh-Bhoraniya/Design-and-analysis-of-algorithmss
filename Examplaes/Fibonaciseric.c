#include<stdio.h>
#include<time.h>
int fibbo(int);

void main(){
	int n , m = 0,i,fibbonaci;
	printf("Enter total term:=");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		fibbonaci=fibbo(m);
		printf ("%d	",fibbonaci);
		m++;
	}
}
int fibbo(int n){
	if(n==0||n==1){
		return n ;
	}
	else{
		return (fibbo(n-1)+fibbo(n-2));
	}
}
