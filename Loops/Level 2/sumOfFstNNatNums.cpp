#include<iostream>
using namespace std;

void sumOfNNaturalNumbers(float num){
    float sum=0;
    for(float i=1 ; i<=num ; i++) sum += i;
    cout<<"Sum of "<<num<<" Natural Numbers: "<<sum;
    
    cout<<"\n";
    
    float i=0;
    sum=0;
    while(i <= num){
        sum += i;
        i++;
    }
    cout<<"Sum of "<<num<<" Natural Numbers: "<<sum;
}

int main(){
    float number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    sumOfNNaturalNumbers(number);
    return 0;
}