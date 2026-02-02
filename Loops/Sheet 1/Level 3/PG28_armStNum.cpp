#include<iostream>
using namespace std;

int numberLength(int num){ // Number of variables:- 2 variables
    int length=0;
    for( ; num!=0 ; num=num/10) length++;
    return length;

    // while(num != 0){
    //     length++;
    //     num=num/10;
    // }
    // return length;
}

void sumOfDigits(int num){ // Number of variables:- 5 + 1(loop variable) 
    int sum=0, number=num;
    // for( ; num!=0 ; num=num/10){
    //     int digit=1;
    //     for(int i=numLen ; i!=0 ; i--) digit *= num%10;
    //     sum += digit;
    // }
    int numLen = numberLength(number);
    
    int digit=1;
    for(int i=numLen ; i!=0 && num!=0 ; i--){
        digit *= num%10;
        if(i == 1){
            i=numLen+1;
            num = num / 10;
            sum += digit;
            digit=1;
        }
    }
    if(sum == number) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";
}


int main(){
    int number=0;
    cout<<"Enter a number to check if its ArmStrong: ";
    cin>>number;

    sumOfDigits(number);
    return 0;
}