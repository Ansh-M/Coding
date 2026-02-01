#include<iostream>
using namespace std;

void sumOfSquares(float num){
    float sum=0;
    for(float i=1 ; i<=num ; i++) sum += i*i*i;
    cout<<"Sum of Cubes of First Natural Numbers: "<<sum;
    
    cout<<"\n";
    
    int i=1;
    sum=0;
    while(i <= num){
        sum += i*i*i;
        i++;
    }
    cout<<"Sum of Cubes of First Natural Numbers: "<<sum;
}

int main(){
    double number=0;
    cout<<"Enter a number: ";
    cin>>number;

    sumOfSquares(number);
    return 0;
}