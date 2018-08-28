//Largest palindrome product
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1 = 999;
	int num2 = 999;
	int mult[6];
	int i;
	int total1;
	int total2;
	int current = 0;

	for(num1 = 999; num1 > 0; num1--){
		for(num2 = 999; num2 > 0; num2--){
			total1 = num1 * num2;
			total2 = num1 * num2;

			for (i = 0; i < 6; ++i){
				mult[i] = total2 % 10;
				total2 = total2 / 10;
			}
			if(mult[0] == mult[5] && mult[1] == mult[4] && mult[2] == mult[3]){
				if(total1 > current){
					current = total1;
				}
			}
		}
	} 
	printf("%d \n", current);
}