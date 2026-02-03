#include<iostream>
using namespace std;

int lengthOfNumber(int num){
    int length=0;
    for( ; num!=0 ; num=num/10) length++;
    return length;
}

void printDigitsOfANumber(int num){
    cout<<"Digits:"<<endl;
    for( ; num!=0 ; num=num/10){
        cout<<num%10<<endl;
    }
    // int length = lengthOfNumber(num); 
    // for( ; length!=0 ; length--){
    //     int digit=1;
    //     int len=length-1;
    //     int n=num;
    //     for(int i=1 ; len!=0 ; i=i*10){
    //         digit = n/i;
    //         len--;
    //         n = n/10;
    //     }
    //     cout<<digit<<endl;
    // }


    // while(num != 0){
    //     cout<<num%10<<endl;
    //     num = num/10;
    // }
}

void reverseOfNumber(int num){
    int reverse=0;
    for( ; num!=0 ; num=num/10) reverse = reverse*10 + num%10 ;
    printDigitsOfANumber(reverse);
}

int main(){
    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    reverseOfNumber(number);
    return 0;
}