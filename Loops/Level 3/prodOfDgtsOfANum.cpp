#include<iostream>
using namespace std;

void productOfDigits(int num){
    int product=1;
    // for( ; num!=0 ; num=num/10) product += num%10;
    // cout<<"Product of Digits: "<<sum;
    
    while(num != 0){
        product *= num % 10;
        num = num / 10;
    }
    cout<<"Product of Digits: "<<product;

}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    productOfDigits(number);
    return 0;
}