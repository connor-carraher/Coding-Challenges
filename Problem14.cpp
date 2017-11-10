#include <iostream>

using namespace std;

int isEven(long num){
	if(num % 2 == 0){
		return 1;
	}
	return 0;
}

int main () {
	long startNum = 500000;
	long num;
	long answerNum = 0;
	int answerCounter = 0;
	int counter = 0;

	while(startNum < 1000000){
		num = startNum;
		while(num > 1){
			if(isEven(num)){
				num /= 2;
			} else{
				num = (3*num) + 1;
			}
			counter++;
		}

		if(counter > answerCounter){
			answerCounter = counter;
			answerNum = startNum;
		}

		startNum++;
		counter = 0;
	}

	cout << "Answer: " << answerNum << endl;
	return 0;
}