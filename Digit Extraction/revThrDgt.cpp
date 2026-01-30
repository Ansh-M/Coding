#include<iostream>
using namespace std;

int main(){
    int number=0, reversedNumber=0;
    cout<<"Enter a 3 digit number : ";
    cin>>number;

    reversedNumber = reversedNumber*10 + number%10;
    number = number/10;
    reversedNumber = reversedNumber*10 + number%10;
    number = number/10;
    reversedNumber = reversedNumber*10 + number%10;
    
    cout<<"Reversed Number : "<<reversedNumber; 
    return 0;
}