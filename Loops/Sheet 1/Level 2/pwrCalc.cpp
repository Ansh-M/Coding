#include<iostream>
using namespace std;

void powerCalculator(int base, int expo){
    // int temp=1;
    // for(int i=1 ; i<=expo ; i++) temp = base*temp;
    // cout<<"Result: "<<temp;

    // cout<<"\n";
    
    // int i=1;
    // temp=1;
    // while(i <= expo){
    //     temp = base*temp;
    //     i++;
    // }
    // cout<<"Result: "<<temp;
    int result=1;
    // for( ; expo!=0 ; expo--){
    //     result = result * base;
    // }
    // cout<<"Result: "<<result;
    
    cout<<"\n";
    
    result=1;
    while(expo != 0){
        result = result * base;
        expo--;
    }
    cout<<"Result: "<<result;
}

int main(){
    int base=0, exponent=0;
    cout<<"Enter base & exponent: ";
    cin>>base>>exponent;

    powerCalculator(base, exponent);
    return 0;
}