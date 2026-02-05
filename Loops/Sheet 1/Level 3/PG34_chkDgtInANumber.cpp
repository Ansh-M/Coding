#include<iostream>
using namespace std;

void checkDigitInANumber(int num, int dgit){
    // for( ; num!=0 ; num=num/10){
    //     if(dgit == num%10){
    //         cout<<"Yes the digit Exists in the Number";
    //         break;
    //     }else if(num/10 == 0){
    //         cout<<"No the digit doesn't exists in the Number";
    //         break;
    //     }
    // }

    while(num != 0){
        if(dgit == num%10){
            cout<<dgit<<" is present in the Number";
            break;
        }else if(num/10 == 0){
            cout<<dgit<<" is not present in the Number";
            break;
        }
        num=num/10;
        
    }
}

int main(){
    int number=0, digit=0;
    cout<<"Enter a Number: ";
    cin>>number;
    cout<<"\nEnter a digit to check if in Number: ";
    cin>>digit;

    checkDigitInANumber(number, digit);
    return 0;
}