#include<iostream>
using namespace std;

void printNto1(int num){
    for(int i=num ; i>=1 ; i--) cout<<i<<" ";

    cout<<"\n";

    int i=num;
    while(i >= 1){
        cout<<i<<" ";
        i--;
    }
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    printNto1(number);
}