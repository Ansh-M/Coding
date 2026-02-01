#include<iostream>
using namespace std;

void printOddNumbers(float num){
    // for(int i=1 ; i<=num ; i=i+2){
    //     if(i == num || i == num-1) cout<<i<<" ";
    //     else cout<<i<<", ";
    // }

    // cout<<"\n";

    // int i=1;
    // while(i <= num){
    //     if(i == num || i == num-1) cout<<i<<" ";
    //     else cout<<i<<", ";
    //     i=i+2;
    // }
    for(int i=1 ; i<=num ; i=i+1){
        if(i%2 == 1){
            if(i == num || i == num-1) cout<<i<<" ";
            else cout<<i<<", ";
        }
    }

    cout<<"\n";

    int i=1;
    while(i <= num){
        if(i%2 == 1){
            if(i == num || i == num-1) cout<<i<<" ";
            else cout<<i<<", ";
        }
        i++;
    }
}

int main(){
    float number=0;
    cout<<"Enter a number: ";
    cin>>number;

    printOddNumbers(number);
}