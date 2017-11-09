//Sum square difference Problem 6
#include <stdio.h>

int main(void){
	int sum = 0;
	int totalSum1 = 0;
	int i = 0;

	for(i = 0; i < 101; i++){
		sum += i;
	}
	totalSum1 = sum * sum;


	for(i = 0, sum = 0; i < 101; i++){
		sum += i * i; 
	}
	printf("The total sum squared is: %d \n", totalSum1);
	printf("The sum of the squares is: %d\n", sum);
	printf("The difference is: %d\n", totalSum1 - sum);

}