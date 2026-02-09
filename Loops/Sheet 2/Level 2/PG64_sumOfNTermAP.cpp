#include<iostream>
using namespace std;

int sumArithmeticProgressionSeries(int fstTerm, int comDiff, int num){

    // for( ; num!=0 ; num--){
    //     cout<<fstTerm<<" ";
    //     fstTerm = fstTerm + comDiff;
    // }

    int sum = 0;
    while(num != 0){
        sum += fstTerm;
        fstTerm = fstTerm + comDiff;
        num--;
    }
    return sum;
}

int main(){
    int firstTerm = 0, commonDifference = 0, number = 0;
    cout<<"Arithmetic Progression"<<endl;
    
    cout<<"\nEnter First Term: ";
    cin>>firstTerm;
    cout<<"Enter Common Difference: ";
    cin>>commonDifference;
    cout<<"Enter range: ";
    cin>>number;

    int sumOfSeries = sumArithmeticProgressionSeries(firstTerm, commonDifference, number);
    cout<<"Sum of "<<number<<" terms of Series: "<<sumOfSeries;
    return 0;
}