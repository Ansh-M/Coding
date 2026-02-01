#include<iostream>
using namespace std;

int numberLength(int num){
    int length=0;
    for( ; num!=0 ; num=num/10) length++;
    return length;

    // while(num != 0){
    //     length++;
    //     num=num/10;
    // }
    // return length;
}

int sumCubedDigits(int num, int numLen){
    int sum=0;
    for( ; num!=0 ; num=num/10){
        int digit=1;
        for(int i=numLen ; i!=0 ; i--) digit *= num%10;
        sum += digit;
    }
    return sum;
}

void isArmstrong(int num, int sum){
    if(num == sum) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";
}


int main(){
    int number=0;
    cout<<"Enter a number to check if its ArmStrong: ";
    cin>>number;

    int numLen = numberLength(number);
    int sum = sumCubedDigits(number, numLen);
    isArmstrong(number, sum); 
    return 0;
}