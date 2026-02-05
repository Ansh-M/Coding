#include<iostream>
using namespace std;

int countOfFactorOfANumber(int num){
    int count=0;    
    
    for(int i=1 ; i<=num/2 ; i++){
        if(num % i == 0){
            count++ ;
        }
    }
    return count+1;
}


int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    int count = countOfFactorOfANumber(number);
    cout<<"Sum Of all Factors of "<<number<<": "<<count;
    return 0;
}