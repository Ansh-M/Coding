#include <iostream>
using namespace std;

int main(){
    int number=0, evenDigit=0; 
    cout<<"Enter a Number : "; 
    cin>>number;

    evenDigit = number%10;
    
    if(evenDigit%2 == 0 ) cout<<"Last Digit is Even";
    else cout<<"Last Digit is not Even";
    
    return 0;
}