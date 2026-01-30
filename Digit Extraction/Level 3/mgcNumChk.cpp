#include<iostream>
using namespace std;

void magicNumber(int number){
    int digit = 0;
    digit = digit + number%10;
    number = number/10;
    digit = digit + (number%10)*10;
    number = number/10;
    if(number==0) digit = digit*101;
    cout<<"Magic Number: "<<digit;
}

int main(){
    int number=0;
    cout<<"Enter a 2 digit number: ";
    cin>>number;
    magicNumber(number);

    return 0;
}