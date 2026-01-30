#include<iostream>
using namespace std;

int main(){
    int number=0, reversedNumber=0;
    cout<<"Enter a 2 digit number : ";
    cin>>number;

    reversedNumber = number%10;
    reversedNumber = reversedNumber*10 + number/10 ;
    
    cout<<"Reversed Number : "<<reversedNumber; 
    return 0;
}