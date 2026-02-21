#include<iostream>
using namespace std;

int productOfDigits(int number){
    int product = 1;
    
    for( ; number > 0 ; number = number/10) product = product * (number % 10);   

    return product;
}

int main(){
    int number = 0;
    cin>>number;
    
    int product = 0;
    if(number < 1 || number > 1000000000) cout<<"Null";
    else product = productOfDigits(number);

    cout<<"\n"<<product;
    return 0;
}