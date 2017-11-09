//Even Fibonacci numbers Problem 2
#include <stdio.h>

int main(void){
	int prev = 1;
	int current = 2;
	int temp;
	int answer = 0;

	while(current < 4000000){

		if(current % 2 == 0){
			answer += current;
		}

		temp = current;
		current = prev + temp;
		prev = temp;
	}
	printf("%d\n", answer);

}