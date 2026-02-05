#include<iostream>
using namespace std;

int sumOfFactorOfANumber(int num){
    int sum=0;    
    
    for(int i=1 ; i<=num/2 ; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum+num;
}


int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    int sum = sumOfFactorOfANumber(number);
    cout<<"Sum Of all Factors of "<<number<<": "<<sum;
    return 0;
}