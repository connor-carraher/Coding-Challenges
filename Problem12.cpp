//Highly divisible triangular number Problem 12

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> primeFactors(int n){
    vector<int> primeFac;

    while (n%2 == 0){
        primeFac.push_back(2);
        n = n/2;
    }
 

    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            primeFac.push_back(i);
            n = n/i;
        }
    }
 
    if (n > 2)
        primeFac.push_back(n);

    return primeFac;
}

int main(){
    int triNum = 0; 
    int divisors;
    for(int i = 1; i < 20000; i++){
        divisors = 1;
        triNum += i;
        vector<int> primeFac = primeFactors(triNum);
        vector<int> divCount;

        while(primeFac.size() != 0){
            int counter = 1;
            while(primeFac.size() > 1 && primeFac.back() == primeFac[primeFac.size() - 2]){
                counter++;
                primeFac.pop_back();
            }
            divCount.push_back(counter);
            primeFac.pop_back();
        }

        while(divCount.size() != 0){
            divisors = divisors * (1 + divCount.back());
            divCount.pop_back();
        }

        if(divisors > 500){
            cout << "divisors exceeded 500: " << triNum << endl;
            return 0;
        }        
    }  
    return 0;
}
