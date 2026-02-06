#include<iostream>
using namespace std;

int gcdOfTwoNumbers(int largerNum, int smallerNum){
    
    if(smallerNum == 1) return 1;
    else{
        int gcd=1;
        for(int i=smallerNum ; i>=2 ; i--){
            if((largerNum%i == 0) && (smallerNum%i == 0)){
                gcd = i;
                break;
            }
        }
        
        return gcd;
    }
}

int largestNumber(int numOne, int numTwo){
    int gcd=0;
    if(numOne > numTwo) gcd = gcdOfTwoNumbers(numOne, numTwo);
    else gcd = gcdOfTwoNumbers(numTwo, numOne);
    return gcd;

}

int main(){
    int numberOne=0, numberTwo=0;
    cout<<"Enter number 1: ";
    cin>>numberOne;
    cout<<"Enter number 2: ";
    cin>>numberTwo;

    int gcd = largestNumber(numberOne, numberTwo);
    cout<<"GCD is: "<<gcd;
    return 0;
}