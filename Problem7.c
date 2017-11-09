//10001st prime Problem 7
#include <stdio.h>

int isPrime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(void){
	int answer = 4;
	int counter = 2;

	while(counter != 10001){
		if(isPrime(answer)){
			counter++;
		}
		answer++;
	}
	printf("%d\n", answer - 1);
	return 0;
}