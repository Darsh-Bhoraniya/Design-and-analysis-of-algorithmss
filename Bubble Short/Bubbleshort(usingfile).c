#include<stdio.h>
int main(){
    int arr[10], num, i, j, temp;    
    printf("Please Enter The elment in arry ");
    scanf("%d", &num);   
    FILE *fp = fopen("bestcase.txt","r");
    for(i = 0; i < num; i++){
	fscanf(fp,"%d", &arr[i]);
	}
    for(i = 0; i < num - 1; i++){       
        for(j = 0; j < num - i - 1; j++){          
            if(arr[j] > arr[j + 1]){               
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("after buuble sorting");
    for(i = 0; i < num; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}
