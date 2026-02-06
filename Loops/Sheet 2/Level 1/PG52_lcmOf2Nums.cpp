#include<iostream>
using namespace std;

void lcmOfTwoNumbers(int numOne, int numTwo, int gcd);

void gcdOfTwoNumbers(int largerNum, int smallerNum){
    
    if(smallerNum == 1) lcmOfTwoNumbers(largerNum, smallerNum, 1);
    else{
        int gcd=1;
        for(int i=smallerNum ; i>=2 ; i--){
            if((largerNum%i == 0) && (smallerNum%i == 0)){
                gcd = i;
                break;
            }
        }
        
        lcmOfTwoNumbers(largerNum, smallerNum, gcd);
    }
}

void lcmOfTwoNumbers(int numOne, int numTwo, int gcd){
    int lcm = (numOne*numTwo)/gcd;
    cout<<"LCM is: "<<lcm;
}

void largestNumber(int numOne, int numTwo){
    
    if(numOne > numTwo) gcdOfTwoNumbers(numOne, numTwo);
    else gcdOfTwoNumbers(numTwo, numOne);
}

int main(){
    int numberOne=0, numberTwo=0;
    cout<<"Enter number 1: ";
    cin>>numberOne;
    cout<<"Enter number 2: ";
    cin>>numberTwo;

    largestNumber(numberOne, numberTwo);

    return 0;
}