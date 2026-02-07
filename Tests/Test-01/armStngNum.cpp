#include<iostream>
using namespace std;

int lengthOfNumber(int num){
    int length = 0;
    for( ; num!=0 ; num=num/10) length++;
    return length;
}

void armStrongNumber(int num){
    cout<<"Is Armstrong: ";
    if(num < 1 || num > (10000)){
        cout<<"Number should be Positive and between 1 & 10000";
    }else{
        int sum = 0, number=num;
        int length = lengthOfNumber(num);
        
        for( ; num!=0 ; num=num/10){
            int digit=1;
            int len=length;
            for( ; len!=0 ; len--){
                digit *= num%10;
            }

            sum += digit; 
        }

        if(sum == number) cout<<"True";
        else cout<<"False";
    }
}

int main(){
    int number = 0;
    cout<<"Armstrong Number"<<endl;
    cout<<"\nEnter a Number: ";
    cin>>number;

    armStrongNumber(number);
    return 0;
}