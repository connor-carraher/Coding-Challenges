//Largest prime factor Problem 3
#include <stdio.h>
#include <limits.h>

int isFactor(int num){
	if(600851475143 % num == 0){
		return 1;
	}
	return 0;
}

int isPrime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}


int main(void){
	int start = 3;
	int answer = 0;

	while(start < INT_MAX){
		if(isFactor(start) && isPrime(start)){ //Short circuit usage
			answer = start;
		}
		start += 2;
	}
	printf("%d\n", answer);
	return 0;
}