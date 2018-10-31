#include<stdio.h>

int main(void){
	int i,sum = 0;
	for(i = 0; i < 11;i++){
		sum += i;
 	}
	printf("sum = %d\n",sum);
	return 0;
}