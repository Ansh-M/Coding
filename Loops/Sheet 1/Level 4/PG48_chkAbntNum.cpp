#include<iostream>
using namespace std;

void checkAbundantNumber(int num){
    int sum=0;

    for(int i=1 ; i<=num/2 ; i++){
        if(num % i == 0) sum += i;
    }
    if(sum > num) cout<<"Number is Abundant Number";
    else cout<<"Number is not an Abundant Number";
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    checkAbundantNumber(number);
    return 0;
}