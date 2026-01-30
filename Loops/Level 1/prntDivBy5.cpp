#include<iostream>
using namespace std;

void printDivisibleBy5(float num){
    cout<<"Divisible by 5"<<endl;
    // for(int i=1 ; i<=num ; i++){
    //     if(i%5 == 0) cout<<i<<" ";
    // }

    // cout<<"\n";

    // int i=1;
    // while(i <= num){
    //     if(i%5 == 0)cout<<i<<" ";
    //     i++;
    // }

    for(float i=5 ; i<=num ; i=i+5){
        cout<<i<<" ";
    }

    cout<<"\n";

    float i=5;
    while(i <= num){
        cout<<i<<" ";
        i=i+5;
    }
}

int main(){
    float number=0;
    cout<<"Enter a number: ";
    cin>>number;

    printDivisibleBy5(number);
}