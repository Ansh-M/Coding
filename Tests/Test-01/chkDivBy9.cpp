#include<iostream>
using namespace std;

void checkDivisibilityBy9(int num){
    if(num<100 || num>999) cout<<"\nNot a 3 digit Number";
    else{
        int sum = 0;
        for( ; num!=0 ; num = num/10){
            sum += num%10;
        }
        if(sum % 9 == 0) cout<<"\nYes";
        else cout<<"\nNo";
    }
}

int main(){
    int number = 0;
    cout<<"Check Divisibility By 9"<<endl;
    cout<<"\nEnter a 3 digit Number: ";
    cin>>number;

    checkDivisibilityBy9(number);
    return 0;
}