#include<iostream>
using namespace std;

void printTable(double num){
    for(double i=1 ; i<=10 ; i++) cout<<num<<"x"<<i<<" = "<<num*i<<endl;

    cout<<"\n";

    double i=1;
    while(i <= 10){
        cout<<num<<"x"<<i<<" = "<<num*i<<endl;
        i++;
    }
}

int main(){
    double number=0;
    cout<<"Enter a Number to Print Table: ";
    cin>>number;

    printTable(number);
}