#include<iostream>
using namespace std;

int countDigitsInANumber(int num){
    int cnt=0;
    // for( ; num!=0 ; num=num/10) cnt++;
    // return cnt;
    
    while(num != 0){
            cnt++;
            num = num / 10;
        }
        return cnt;
    }
    
float countDigitsInNumber(float num){
    if(num < 0) num = -(num);
    int cnt=0;
    // for( ; num>=1 ; num=num/10) cnt++;
    // return cnt;

    while(num >= 1){
        cnt++;
        num = num / 10;
    }
    return cnt;
}

int main(){
    int number=0;
    cout<<"Enter a Number to count Digits: ";
    cin>>number;

    float num = number;
    
    int digitCount = countDigitsInANumber(number);
    float dgitCount = countDigitsInNumber(number);
    cout<<"\nNumber of Digits: "<<digitCount;
    cout<<"\nNumber of Digits: "<<dgitCount;
    return 0;
}