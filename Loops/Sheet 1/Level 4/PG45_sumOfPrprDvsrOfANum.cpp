#include<iostream>
using namespace std;

int sumOfDivisorsOfANumber(int num){
    int sum=0;    
    
    for(int i=1 ; i<=num/2 ; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}


int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    int sum = sumOfDivisorsOfANumber(number);
    cout<<"Sum Of all Proper Divisior of "<<number<<": "<<sum;
    return 0;
}