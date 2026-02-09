#include<iostream>
using namespace std;

float sumHarmonicProgressionSeries(float fstTerm, float comDiff, float num){

    // for( ; num!=0 ; num--){
    //     sum += 1/fstTerm;
    //     fstTerm = fstTerm + comDiff;
    //     num--;
    // }

    float sum = 0;
    while(num > 0){
        sum += 1/fstTerm;
        fstTerm = fstTerm + comDiff;
        num--;
    }
    return sum;
}

int main(){
    float firstTerm = 0, commonDifference = 0, number = 0;
    cout<<"Harmonic Progression"<<endl;
    
    cout<<"\nEnter First Term: ";
    cin>>firstTerm;
    cout<<"Enter Common Difference: ";
    cin>>commonDifference;
    cout<<"Enter range: ";
    cin>>number;

    float sumOfSeries = sumHarmonicProgressionSeries(firstTerm, commonDifference, number);
    cout<<"Sum of "<<number<<" terms of Series: "<<sumOfSeries;
    return 0;
}