#include<iostream>
using namespace std;

void printGeometricProgressionSeries(int fstTerm, int comRat, int num){

    cout<<"\nSeries: ";
    // for( ; num!=0 ; num--){
    //     cout<<fstTerm<<" ";
    //     fstTerm = fstTerm * comRat;
    // }

    while(num != 0){
        cout<<fstTerm<<" ";
        fstTerm = fstTerm * comRat;
        num--;
    }
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

    printGeometricProgressionSeries(firstTerm, commonRatio, number);
    return 0;
}