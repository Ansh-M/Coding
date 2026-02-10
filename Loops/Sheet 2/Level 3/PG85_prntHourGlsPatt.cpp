#include<iostream>
using namespace std;

void printHourGlassPattern(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        for(int j=numRows-i ; j<numRows ; j++) cout<<" ";
        for(int j=i ; j<=numRows ; j++) cout<<j<<" ";
    
        cout<<endl;
    }

    for(int i=1 ; i<=numRows ; i++){
        for(int j=i ; j<numRows ; j++) cout<<" ";
        for(int j=numRows-i ; j<=numRows ; j++) cout<<j<<" ";
    
        cout<<endl;
    }
}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of Rows to print Hour Glass Pattern: ";
    cin>>numberOfRows;

    printHourGlassPattern(numberOfRows);
    return 0;
}