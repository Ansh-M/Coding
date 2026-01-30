#include<iostream>
using namespace std;

void printTable(double num, double rng){
    for(double i=1 ; i<=rng ; i++) cout<<num<<"x"<<i<<" = "<<num*i<<endl;

    cout<<"\n";

    double i=1;
    while(i <= rng){
        cout<<num<<"x"<<i<<" = "<<num*i<<endl;
        i++;
    }
}

int main(){
    double number=0, range=0;
    cout<<"Enter a Number to Print Table: ";
    cin>>number;
    cout<<"Enter range to print table: ";
    cin>>range;

    printTable(number, range);
}