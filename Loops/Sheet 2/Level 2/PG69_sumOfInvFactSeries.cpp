#include<iostream>
using namespace std;

float factorialOfANumber(int num){
    int factorial=1;
    for( ; num>=2 ; num--){
        factorial *= num;
    }

    return factorial;
}

float sumOfReverseFactorialSeries(float num){

    // for( ; num!=0 ; num--){
    //     sum += 1/fstTerm;
    //     fstTerm = fstTerm + comDiff;
    //     num--;
    // }

    float sum = 0, i = 2, fact=1;
    while(i <= num){
        sum += 1/fact;
        fact = factorialOfANumber(i);
        i++;
    }
    return sum;
}

int main(){
    float number = 0;
    
    cout<<"Enter a number/range: ";
    cin>>number;

    float sumOfSeries = sumOfReverseFactorialSeries(number);
    cout<<"Sum of "<<number<<" terms of Inverse Factorial Series/Taylor Series: "<<sumOfSeries;
    return 0;
}