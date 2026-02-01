#include <iostream>
using namespace std;

void lastDigit(){
    int number=0;
    
    cout<<"Enter a Number : ";
    cin>>number;

    number = number%10;
    cout<<"Last Digit : "<<number;
}

int main(){
    lastDigit();
}