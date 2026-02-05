#include<iostream>
using namespace std;

int removeDigitOccurencesInANumber(int num, int dgit){
    int newNumber=0;
    for(int i=1 ; num!=0 ; num=num/10){
        if(dgit != num%10){
            newNumber = (newNumber) + (num%10)*i;
            i = i*10;
        }
    }
    return newNumber;
}

int main(){
    int number=0, digit=0;
    cout<<"Enter a Number: ";
    cin>>number;
    cout<<"\nEnter a digit to remove from the Number: ";
    cin>>digit;

    int newNumber = removeDigitOccurencesInANumber(number, digit);
    cout<<"New Number after removal of "<<digit<<" is: "<<newNumber;
    return 0;
}