#include <iostream>
using namespace std;

int addition(int a, int b){
    int result = a + b;
    return result;
}

int main(){
    float number1=0.0, number2=0.0;
    cout<<"Enter value 1 : ";
    cin>> number1;
    cout<<"Enter value 2 : ";
    cin>> number2;
    cout<<"Result : "<<addition(number1, number2);
    return 0;
}