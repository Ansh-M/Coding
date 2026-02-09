#include<iostream>
using namespace std;

int sumOfGeometricProgressionSeries(int fstTerm, int comRat, int num){
    int sum = 0;
    // for( ; num!=0 ; num--){
    //     cout<<fstTerm<<" ";
    //     fstTerm = fstTerm * comRat;
    // }

    while(num != 0){
        sum += fstTerm;
        fstTerm = fstTerm * comRat;
        num--;
    }
    return sum;
}

int main(){
    int firstTerm = 0, commonRatio = 0, number = 0;
    cout<<"Geometric Progression"<<endl;
    
    cout<<"\nEnter First Term: ";
    cin>>firstTerm;
    cout<<"Enter Common Ratio: ";
    cin>>commonRatio;
    cout<<"Enter range: ";
    cin>>number;

    int sumOfSeries = sumOfGeometricProgressionSeries(firstTerm, commonRatio, number);
    cout<<"Sum of "<<number<<" terms of Series: "<<sumOfSeries;
    return 0;
}