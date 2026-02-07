#include<iostream>
using namespace std;

int sumOfFibonacciNumbers(int num){
    cout<<"Fibonacci Series upto "<<num<<" terms: ";
    int a = 0,b = 0, sum=0;
    cout<<a<<" "; //First term

    int c = 1;

    for(int i=1 ; i<num ; i++){ // n-1 terms
        cout<<c<<" ";
        a = b;
        b = c;
        c = a + b;
        sum += a; // b because c is calculated for i==num, which get's failed in the next iteration
        // and not a as a is calculated only till the previous term
    }

    return sum;
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    int sumOfNums = sumOfFibonacciNumbers(number);
    cout<<"\nSum of Fibinacci Numbers till "<<number<<": "<<sumOfNums;
    
    return 0;
}