#include<stdio.h>
#include<time.h>

int pow(int x,int y){
	if (y==1){
		return x;
	}
	else{
		y = y -1;
		return x*pow(x,y);
	}
}
void main(){
	int x,y,ans;
	clock_t start,end;
	double cpu_time_used;
	
	printf("Enter value of x :=");
	scanf("%d",&x);
	printf("Enter value of y:=");
	scanf("%d",&y);

	start= clock();
	ans = pow(x,y);
	printf("power = %d\n",ans);
	end = clock();
	
	cpu_time_used=((double) (end-start)) / CLOCKS_PER_SEC;
	printf (" Reqired time= %lf ", cpu_time_used );
}
