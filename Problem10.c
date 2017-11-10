//Summation of primes Problem 10
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
	//Problem tells us that sum of primes under 10 is 17
	long answer = 17;
	int num = 11;

	while(num < 2000000){
		if(isPrime(num)){
			answer += num;
		}
		num += 2;
	}
	printf("%ld\n", answer);
	return 0;
}