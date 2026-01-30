#include<iostream>
using namespace std;

int digitRootCalculator(int number){
    int digitRoot=0;
    if(number!=0){
        digitRoot+= number%10;
        number = number / 10;
    }
    if(number!=0){
        digitRoot+= number%10;
        number = number / 10;
    }
    if(number!=0){
        digitRoot+= number%10;
        number = number / 10;
    }
    if(number!=0){
        digitRoot+= number%10;
        number = number / 10;
    }
    if(number!=0){
        digitRoot+= number%10;
        number = number / 10;
    }
    int digit=0;
    if(digitRoot>9){
        number += digitRoot%10;
        digitRoot = digitRoot / 10;
    }else return digitRoot;
    if(digitRoot!=0){
        number += digitRoot%10;
        digitRoot = digitRoot / 10;
    }else if(number > 9){
        digit+= number%10;
        number = number / 10;
    }else return number;
    if(digitRoot!=0){
        number += digitRoot%10;
        digitRoot = digitRoot / 10;
    }else if(number > 9){
        digit+= number%10;
        number = number / 10;
        digit+= number%10;
        number = number / 10;
        return digit;
    }else return number;
    
    return 0;
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit Number: ";
    cin>>number;
    int digitRoot = digitRootCalculator(number);
    cout<<"Digit Root of the Number is: "<<digitRoot;
    return 0; 

}