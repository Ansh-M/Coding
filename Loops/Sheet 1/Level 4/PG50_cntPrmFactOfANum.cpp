#include<iostream>
using namespace std;

int countPrimeFactorsOfANumber(int num){
    int countFactors=0;

    if(num == 1) return 1;
    
    for(int i=2 ; i<=num ; i++){
        if(num % i == 0){
            countFactors++;
            num=num/i;
            i--;
        }
    }
    return countFactors;
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    int count = countPrimeFactorsOfANumber(number);
    cout<<"Total Prime Factors of "<<number<<": "<<count;
    return 0;
}