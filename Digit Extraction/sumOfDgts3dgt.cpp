#include<iostream>
using namespace std;

int main(){
    int number=0, sumOfDigits=0;
    cout<<"Enter a 3 digit number : ";
    cin>>number;
    sumOfDigits += number%10;
    number = number/10;
    sumOfDigits += number%10;
    sumOfDigits += number/10;
    cout<<"Middle Digit : "<<sumOfDigits; 
    return 0;
}