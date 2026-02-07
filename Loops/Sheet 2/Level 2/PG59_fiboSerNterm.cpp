#include<iostream>
using namespace std;

void printFibonacciSeries(int num){
    cout<<"Fibonacci Series upto "<<num<<" terms: ";
    int a = 0,b = 0;
    cout<<a<<" "; //First term

    int c = 1;

    for(int i=1 ; i<num ; i++){ // n-1 terms
        cout<<c<<" ";
        a = b;
        b = c;
        c = a + b;
    }
    
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    printFibonacciSeries(number);
    
    return 0;
}