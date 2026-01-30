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


int main(){
    int number=0;
    cout<<"Enter a 3 digit Number: ";
    cin>>number;
    int sum = sumOfCubedDigits(number);
    
    if(number==sum) cout<<"Narcissistic Number";
    else cout<<"Not a Narcissistic Number";
    cout<<"\nEntered Number: "<<number<<"\nSum of Cubed Digits: "<<sum;


    return 0;
}