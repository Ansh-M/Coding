#include<iostream>
using namespace std;

int sumOfCubedDigits(int num){
    int digitSumCubed = 0;
    digitSumCubed = digitSumCubed + (num % 10)*(num % 10)*(num % 10); //0+9
    num = num / 10;//15
    if(num!=0){ //15!=0
        digitSumCubed = digitSumCubed + (num % 10)*(num % 10)*(num % 10); // 9+25
        num = num / 10; // 1
    }else return digitSumCubed;
    if(num!=0){ // 1!=0
        digitSumCubed = digitSumCubed + (num % 10)*(num % 10)*(num % 10); // 
        num = num / 10;
    }else return digitSumCubed;
    if(num!=0){
        digitSumCubed = digitSumCubed + (num % 10)*(num % 10)*(num % 10);
        num = num / 10;
    }else return digitSumCubed;

    return 0;
}

void isArmstrongOrNot(int num, int sum){
    if(num == sum) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";
}


int main(){
    int number=0;
    cout<<"Enter a 3 digit Number: ";
    cin>>number;
    int sum = sumOfCubedDigits(number);
    isArmstrongOrNot(number, sum);
    return 0;
}