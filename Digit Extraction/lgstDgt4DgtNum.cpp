#include<iostream>
using namespace std;

void largestDigitCalc(int num){
    int largestDigit=0, digit=0;
    cout<<"\nLargest Digit: ";
    digit = num % 10;
    num = num/10;   
    if(digit > largestDigit) largestDigit = digit;
    digit = num % 10;
    num = num/10;
    if(digit > largestDigit) largestDigit = digit;
    digit = num % 10;
    num = num/10;
    if(digit > largestDigit) largestDigit = digit;
    digit = num % 10;
    num = num/10;
    if(digit > largestDigit) largestDigit = digit;
    cout<<largestDigit<<endl;
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit number: ";
    cin>>number;

    largestDigitCalc(number);
    
    return 0;
}