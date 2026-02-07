#include<iostream>
using namespace std;

void checkFibonacciTerm(int num){
    int a = 0, b = 0, c = 1;

    for(int i=1 ; i<=num ; i++){ // n-1 terms
        cout<<c<<" ";
        if(c == num){
            cout<<"\nIs "<<num<<" Fibonacci Term: ";
            cout<<"Yes";
            break;
        }else if(c > num){
            cout<<"\nIs "<<num<<" Fibonacci Term: ";
            cout<<"No";
            break;
        }
        a = b;
        b = c;
        c = a + b;
    }
    
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    checkFibonacciTerm(number);
    
    return 0;
}