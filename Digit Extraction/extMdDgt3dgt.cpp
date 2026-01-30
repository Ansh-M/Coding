#include<iostream>
using namespace std;

int main(){
    int number=0;
    cout<<"Enter a 3 digit number : ";
    cin>>number;
    number = number/10;
    number = number%10;
    cout<<"Middle Digit : "<<number; 
    return 0;
}