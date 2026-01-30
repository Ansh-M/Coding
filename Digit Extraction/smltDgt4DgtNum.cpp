#include<iostream>
using namespace std;

void largestDigitCalc(int num){
    int smallestDigit=9, digit=0;
    cout<<"\nSmallest Digit: ";
    digit = num % 10;
    num = num/10;   
    if(digit < smallestDigit) smallestDigit = digit;
    digit = num % 10;
    num = num/10;
    if(digit < smallestDigit) smallestDigit = digit;
    digit = num % 10;
    num = num/10;
    if(digit < smallestDigit) smallestDigit = digit;
    digit = num % 10;
    num = num/10;
    if(digit < smallestDigit) smallestDigit = digit;
    cout<<smallestDigit<<endl;
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit number: ";
    cin>>number;

    largestDigitCalc(number);
    
    return 0;
}