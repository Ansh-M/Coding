#include<iostream>
using namespace std;

int numberLength(int num){
    int length=0;
    for( ; num!=0 ; num=num/10) length++;

    return length;
}

int sumOfDigits(int num, int length){
    int sum=0;

    for( ; num!=0 ; num=num/10){
        int digit=1;
        for(int j=length ; j>0 ; j--) digit *= num % 10;

        sum += digit;
    }
    return sum;
}

void armstrongSeries(int range){
    cout<<"\nArmstrong Numbers in 1 to "<<range<<": ";
    for(int i=1 ; i<=range ; i++){

        int length = numberLength(i);
        int sum = sumOfDigits(i, length);
        
        if(sum == i) cout<<i<<" ";
    }
}

int main(){
    int number=0;
    cout<<"Enter a number to check print ArmStrong Numbers: ";
    cin>>number;

    armstrongSeries(number); 
    return 0;
}