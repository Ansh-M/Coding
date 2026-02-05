#include<iostream>
using namespace std;

void printPrimeFactorsOfANumber(int num){
    cout<<"Prime Factors of "<<num<<": ";
    
    for(int i=2 ; i<=num ; i++){
        if(num % i == 0){
            cout<<i<<" ";
            num=num/i;
            i--;
        }
    }
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    printPrimeFactorsOfANumber(number);
    return 0;
}