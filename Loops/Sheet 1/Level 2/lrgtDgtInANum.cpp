#include<iostream>
using namespace std;

void largestDigitInANumber(int num){
    int largestDigit=0;
    // for( ; num !=0 ; num=num/10) if(largestDigit < num%10) largestDigit = num%10;
    // cout<<"\nLargest Digit: "<<largestDigit;
    
    while(num != 0){
        if(largestDigit < num%10) largestDigit = num%10;
        num = num / 10;
    }
    cout<<"\nLargest Digit: "<<largestDigit;
}

int main(){
    int number=0;
    cout<<"Enter a Number to find Largest Digit: ";
    cin>>number;

    largestDigitInANumber(number);
    return 0;
}