#include<iostream>
using namespace std;

void checkStrongNumber(int num, int factsum){
    if(num == factsum) cout<<"Strong Number\n\n";
    else cout<<"Not Strong Number\n\n";
}

int factorialOfNumber(int num){
    int sum = 0;

    if(num == 0 || num ==1) return 1;
    else{
        for( ; num!=0 ; num=num/10){
            int digit = 1;
            int i = num%10;

            while(i>1){ // Major Mistake:- i>1 is right but i!=1 overlooks if digit is <=0
                digit *= i;
                i--;
            }
            sum += digit;
        }
        return sum;
    }
}

int main(){
    int number = 0;
    cout<<"\nEnter a Number: ";
    cin>>number;

    int factorialSum = factorialOfNumber(number);
    checkStrongNumber(number, factorialSum);
    return 0;
}