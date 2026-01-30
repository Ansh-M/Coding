#include <iostream>
using namespace std;

int main(){
    int dividend=0, divisor=0;
    cout<<"Enter Dividend and Divisor : ";
    cin>>dividend;
    cin>>divisor;
    
    if(dividend%divisor == 0){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible";
    }
}