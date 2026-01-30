#include<iostream>
using namespace std;

int main(){
    int number=0, prodOfDigits=1;
    cout<<"Enter a 3 digit number : ";
    cin>>number;
    prodOfDigits *= number%10;
    number = number/10;
    prodOfDigits *= number%10;
    number = number/10;
    prodOfDigits *= number%10;
    cout<<"Middle Digit : "<<prodOfDigits; 
    return 0;
}