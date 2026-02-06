#include<iostream>
using namespace std;

int sumOfDigits(int num);
int productOfDigits(int num);

void checkSpecialNumber(int num){
    int sumOfDgits = sumOfDigits(num);
    int prodOfDgits = productOfDigits(num);

    if((sumOfDgits + prodOfDgits) == num) cout<<num<<" is Special Number\n"<<endl;
    else cout<<num<<" is not A Special Number\n"<<endl;
}

int sumOfDigits(int num){
    int sum = 0;
    
    for( ; num!=0 ; num=num/10){
        sum += num%10;
    }
    
    return sum;
}

int productOfDigits(int num){
    int prod = 1;
    
    for( ; num!=0 ; num=num/10){
        prod *= num%10;
    }
    
    return prod;
}


int main(){
    int number=0;
    cout<<"\nEnter a Number: ";
    cin>>number;

    checkSpecialNumber(number);
    return 0; 
}