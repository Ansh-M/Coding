#include<iostream>
using namespace std;

void gcdOfTwoNumbers(int largerNum, int smallerNum){
    
    if(smallerNum == 1) cout<<"Co Prime Numbers";
    else{
        int gcd=1;
        for(int i=smallerNum ; i>=2 ; i--){
            if((largerNum%i == 0) && (smallerNum%i == 0)){
                gcd = i;
                break;
            }
        }
        
        if(gcd == 1)cout<<"Co Prime Numbers";
        else cout<<"Not Co Prime Numbers";
    }
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