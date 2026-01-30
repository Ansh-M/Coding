#include<iostream>
using namespace std;

void isdisarium(int number){
    int num=number;
    int diasriumNum=0;
    diasriumNum = diasriumNum + (number%10)*(number%10)*(number%10);
    number = number / 10;
    diasriumNum = diasriumNum + (number%10)*(number%10);
    number = number / 10;
    diasriumNum = diasriumNum + (number%10);
    number = number / 10;
    if(diasriumNum == num) cout<<"Disarium Number";
    else cout<<"Not a Disarium Number";
     
}

int main(){
    int number=0;
    cout<<"Enter a 3 digit Number: ";
    cin>>number;

    isdisarium(number);
    return 0;
}