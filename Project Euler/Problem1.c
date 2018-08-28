//Multiples of 3 and 5 Problem 1
#include <stdio.h>

int main(void){
	int answer = 0;
	int num = 999;

	while(num > 0){
		if((num % 3 == 0) || (num % 5 == 0)){
			answer += num;
		}
		num--;
	}
	printf("%d\n", answer);
	return 0;
}