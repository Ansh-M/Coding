#include<iostream>
using namespace std;

void countEvenOddDigits(int number){
    int countEven=0, countOdd=0;

    // for( ; number!=0 ; number=number/10){
    //     if((number % 10)%2 == 0) countEven++;
    //     else countOdd++;
    // }
    while(number != 0){
        if((number % 10)%2 == 0) countEven++;
        else countOdd++;
        number = number / 10;
    }

    cout<<"Even Digits: "<<countEven<<"\nOdd Digits: "<<countOdd;
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    countEvenOddDigits(number);
    return 0;
}