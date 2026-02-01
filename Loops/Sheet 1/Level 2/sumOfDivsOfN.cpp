#include<iostream>
using namespace std;

int sumOfDivisorsOfN(int num){
    int sum=0;
    // for(int i=1 ; i<=num ; i++){
    //     if(num % i == 0) sum += i;
    // }

    // return sum;
    
    
    int i=1;
    while(i <= num){
        if(num % i == 0) sum += i;
        i++;
    }
    return sum;
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    int sum = sumOfDivisorsOfN(number);
    cout<<"\nSum of Divisors of N is: "<<sum;
    return 0;
}