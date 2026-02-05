#include<iostream>
using namespace std;

void checkDigitOccurencesInANumber(int num, int dgit){
    int count=0;
    // for( ; num!=0 ; num=num/10){
    //     if(dgit == num%10){
    //         count++;
    //     }
    // }
    while(num != 0){
        if(dgit == num%10) count++;
        num = num/10;
    }
    cout<<dgit<<" appears "<<count<<" times in the Number";
}

int main(){
    int number=0, digit=0;
    cout<<"Enter a Number: ";
    cin>>number;
    cout<<"\nEnter a digit to check if in Number: ";
    cin>>digit;

    checkDigitOccurencesInANumber(number, digit);
    return 0;
}