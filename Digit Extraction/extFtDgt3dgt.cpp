#include<iostream>
using namespace std;

int main(){
    int number=0, firstDigit=0;
    cout<<"Enter a 3 digit number : ";
    cin>>number;
    firstDigit = number/100;
    cout<<"First Digit : "<<firstDigit; 
    return 0;
}