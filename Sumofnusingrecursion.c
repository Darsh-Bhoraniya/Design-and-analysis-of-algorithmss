#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	int n ,sumofn;
	printf("Enter value of N");
	scanf("%d",&n);
	start= clock();
	sumofn=addNumbers(n);
	printf("%d",sumofn);
	end = clock();
	cpu_time_used=((double) (end-start)) / CLOCKS_PER_SEC;
	printf (" time = %lf ", cpu_time_used );
}
int addNumbers(int n) {
  if (n != 0){
    return n + addNumbers(n - 1);
	}
  else{
    return n;
	}
}
