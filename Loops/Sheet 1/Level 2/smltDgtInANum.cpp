#include<iostream>
using namespace std;

void smallestDigitInANumber(int num){
    int smallestDigit=9;
    // for( ; num !=0 ; num=num/10) if(smallestDigit > num%10) smallestDigit = num%10;
    // cout<<"\nSmallest Digit: "<<smallestDigit;
    
    while(num != 0){
        if(smallestDigit > num%10) smallestDigit = num%10;
        num = num / 10;
    }
    cout<<"\nSmallest Digit: "<<smallestDigit;
}

int main(){
    int number=0;
    cout<<"Enter a Number to find Smallest Digit: ";
    cin>>number;

    smallestDigitInANumber(number);
    return 0;
}