#include<iostream>
using namespace std;

void nthFibonacciNumber(int num){
    int a=0, b=-1, c=1;
    cout<<"Fibonacci Series "<<num<<"th Term: ";
    for(int i=0 ; i<num ; i++){
        a = b;
        b = c;
        c = a + b;
        if(i == num-1) cout<<c;
    }

    cout<<"\n";

    int i=1;
    a=0 , b=-1, c=1;
    while(i <= num){
        a = b;
        b = c;
        c = a + b;
        if(i == num) cout<<c;
        i++;
    }
}


int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    nthFibonacciNumber(number);
    return 0;
}