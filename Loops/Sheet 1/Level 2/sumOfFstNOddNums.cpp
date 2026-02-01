#include<iostream>
using namespace std;

void sumOfFirstNEvenNumbers(float num){
    float sumOdd=0;
    // for(float i=1 ; i<=num*2 ; i=i+2) sumOdd += i;
    // cout<<"Sum of first "<<num<<" Odd Numbers: "<<sumEven;
    
    // cout<<"\n";
    
    // float i=2;
    // sumOdd=0;
    // while(i <= num*2){
    //     sumOdd += i;
    //     i = i+2;
    // }
    // cout<<"Sum of first "<<num<<" Odd Numbers: "<<sumOdd;

    for(int i=1 ; i<=num*2 ; i++){
        if(i%2 == 1) sumOdd += i;
    }
    cout<<"Sum of first "<<num<<" Odd Numbers: "<<sumOdd;
    
    cout<<"\n";
    
    int i=1;
    sumOdd=0;
    while(i <= num*2){
        if(i%2 == 1) sumOdd += i;
        i = i+2;
    }
    cout<<"Sum of first "<<num<<" Odd Numbers: "<<sumOdd;
}

int main(){
    float number=0;
    cout<<"Enter a Number: ";
    cin>>number;
    
    sumOfFirstNEvenNumbers(number);
    return 0;
}