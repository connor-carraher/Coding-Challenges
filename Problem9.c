// Special Pythagorean triplet: Problem 9
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a, b, c;

	for(a = 1; a < 1000; a++){
		for(b = 1; b < 1000; b++){
			for(c = 1; c < 1000; c++){
				if(a*a + b*b == c*c && a+b+c == 1000){
					printf("%d\n", a*b*c);
					return;
				}
			}
		}
	}
}