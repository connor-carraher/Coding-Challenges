//Highly divisible triangular number Problem 12

#include <iostream>
using namespace std;

int main () {
	long triNum = 0; //Has to be greater than 500 
	int counter = 0;
	for(int i = 1; i < 1000000; i++){
		triNum += i;

		for(int j = 1; j <= triNum; j++){
			if(triNum % j == 0){
				counter++;
			}
		}
		if(counter > 500){
			cout << triNum << endl	;
			return 0;
		}
		if(counter > 100){
			cout << i << ":  " << triNum << ":  " << counter << endl;
		}
		counter = 0;
	}

	return 0;
}