#include<iostream>
using namespace std;

void sumOfFirstNEvenNumbers(float num){
    float sumEven=0;
    // for(float i=2 ; i<=num*2 ; i=i+2) sumEven += i;
    // cout<<"Sum of first "<<num<<" Even Numbers: "<<sumEven;
    
    // cout<<"\n";
    
    // float i=2;
    // sumEven=0;
    // while(i <= num*2){
    //     sumEven += i;
    //     i = i+2;
    // }
    // cout<<"Sum of first "<<num<<" Even Numbers: "<<sumEven;

    for(int i=2 ; i<=num*2 ; i++){
        if(i%2 == 0) sumEven += i;
    }
    cout<<"Sum of first "<<num<<" Even Numbers: "<<sumEven;
    
    cout<<"\n";
    
    int i=2;
    sumEven=0;
    while(i <= num*2){
        if(i%2 == 0) sumEven += i;
        i++;
    }
    cout<<"Sum of first "<<num<<" Even Numbers: "<<sumEven;
}

int main(){
    float number=0;
    cout<<"Enter a Number: ";
    cin>>number;
    
    sumOfFirstNEvenNumbers(number);
    return 0;
}