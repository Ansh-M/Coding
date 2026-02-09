#include<iostream>
using namespace std;

void printTribonacciSeries(int num){
    int a = 0, b = 0, c=-1 , d=1;
    
    cout<<"\nSeries: ";
    for( ; num!=0 ; num--){
        a = b;
        b = c;
        c = d;
        d = a + b + c;
        cout<<d<<" ";
    }

}

int main(){
    int number = 0;
    cout<<"Tribonacci Series";
    cout<<"\nEnter a Number/Range: ";
    cin>>number;

    printTribonacciSeries(number);
    return 0;
}