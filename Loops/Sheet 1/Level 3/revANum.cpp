#include<iostream>
using namespace std;

int reverseNumber(int num){
    int rev=0;
    // for(int i=num%10 ; num!=0 ; i=num%10){
    //     rev = (rev*10) + i;
    //     num = num / 10;
    // }
    // return rev;

    while(num != 0){
        rev = (rev*10) + num % 10;
        num = num / 10;
    }
    return rev;
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    int reverse=reverseNumber(number);
    cout<<"\nReversed Number: "<<reverse;
    return 0;
}