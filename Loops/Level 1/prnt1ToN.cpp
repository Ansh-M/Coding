#include<iostream>
using namespace std;

void print1ToN(int num){
    
    for(int i=1 ; i<=num ; i++) cout<<i<<" ";
    
    cout<<"\n";
    int i=1;
    while(i<=num){
        cout<<i<<" ";
        i++;
    }
}

int main(){
    int number;
    cout<<"Enter a Number: ";
    cin>>number;

    print1ToN(number);
}