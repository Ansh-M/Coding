#include<iostream>
using namespace std;

int checkDigitOccurencesInANumber(int num, int oldDgit, int newDgit){
    int newNumber=0;
    for(int i=1 ; num!=0 ; num=num/10){
        if(oldDgit == num%10){
            newNumber = newNumber + (newDgit*i);
        }else{
            newNumber = newNumber + (num%10)*i;
        }
        i = i*10;
    }
    return newNumber;
}

int main(){
    int number=0, oldDigit=0, newDigit=0;
    cout<<"Enter a Number: ";
    cin>>number;
    cout<<"\nEnter a digit to be replaced in the Number: ";
    cin>>oldDigit;
    cout<<"\nEnter a digit to be replaced with in the Number: ";
    cin>>newDigit;

    int newNumber = checkDigitOccurencesInANumber(number, oldDigit, newDigit);
    cout<<"New Number after replacement is: "<<newNumber;
    return 0;
}