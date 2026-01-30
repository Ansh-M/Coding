#include<iostream>
using namespace std;

float incomeTaxCalculator(float inc){
    if(inc > 0){
        if(inc <= 250000)
            return inc*0.00;
        else if(inc <= 500000)
            return inc*0.05;
        else if(inc <= 1000000)
            return inc*0.20;
        else 
            return inc*0.30;
    }else return 0;
}

int main(){
    float income=0.0;
    cout<<"Enter your (Total/Gross) Income(in Rs) : ";
    cin>>income;

    float taxAmount = incomeTaxCalculator(income);
    cout<<"Tax Payable : Rs "<<taxAmount;
    return 0;
}