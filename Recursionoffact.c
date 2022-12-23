#include<stdio.h>
#include<time.h>

long int fact(long int n ){
	if(n==1 || n==0){
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}

void main(){
	
	//Time complexcity
	clock_t start,end;
	double cpu_time_used;
	long n,factorial;
	printf("Enter Value of n ");
	scanf("%ld",&n);	
	start= clock();	
	factorial = fact(n);
	printf(" value %ld",factorial);
	end = clock();
	cpu_time_used=((double) (end-start)) / CLOCKS_PER_SEC;
	printf (" time = %lf ", cpu_time_used );
}

