#include<iostream>
using namespace std;

float factorialOfN(float num){
    float factorial = 1;
    for(float i=1 ; i<=num ; i++) factorial = factorial*i;
    return factorial;

    // float i=1;
    // factorial=1;
    // while(i <= num){
    //     factorial = factorial*i;
    //     i++;
    // }
    // return factorial;
}

int main(){
    float number=0;
    cout<<"Enter a Number to find Factorial: ";
    cin>>number;

    float fact=factorialOfN(number);
    cout<<"Factorial of "<<number<<": "<<fact;
}