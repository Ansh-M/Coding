#include<iostream>
using namespace std;

void printArithmeticProgressionSeries(int fstTerm, int comDiff, int num){
    int sum=0;

    cout<<"\nSeries: ";
    // for( ; num!=0 ; num--){
    //     cout<<fstTerm<<" ";
    //     fstTerm = fstTerm + comDiff;
    // }
    
    while(num != 0){
        cout<<fstTerm<<" ";
        fstTerm = fstTerm + comDiff;
        num--;
    }
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

    printArithmeticProgressionSeries(firstTerm, commonDifference, number);
    return 0;
}