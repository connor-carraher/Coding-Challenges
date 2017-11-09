//Smallest multiple Problem 5
#include <stdio.h>

int main(void){
	int answer = 1;
	int counter = 0;
	while(1){
		for(int i = 1; i < 21; i++){
			if(answer % i != 0){
				break;
			} else{
				counter++;
			}
		}
		if(counter == 20){
			printf("%d\n", answer);
			return 0;
		}
		counter = 0;
		answer++;
	}
	return 0;
}