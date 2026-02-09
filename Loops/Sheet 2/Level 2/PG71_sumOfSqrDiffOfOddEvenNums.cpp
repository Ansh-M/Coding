#include<iostream>
using namespace std;

int printSquaredAlternateSumSeries(int num){
    int sum = 0;
    
    for(int i=1 ; i<=num ; i++){
        if(i % 2 == 1) sum += i*i;
        else sum -= i*i;  
    }

    return sum;
}

int main(){
    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    int sumOfSeries = printSquaredAlternateSumSeries(number);
    cout<<"Sum of Series: "<<sumOfSeries;
    return 0;
}