#include <iostream>
using namespace std;

int main(){
    int number=0;
    cout<<"Enter a Number : ";
    cin>>number;
    
    if(number%2 == 0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}