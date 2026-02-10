#include<iostream>
using namespace std;

void printInvertedRightNumberTriangle(int numRows){
    for(int i=numRows ; i>=1 ; i--){
        for(int j=1 ; j<=i ; j++) cout<<j<<" ";
        
        cout<<endl;
    }

    cout<<"\n\n";
    
    for(int i=0 ; i<numRows ; i++){
        for(int j=1 ; j<=numRows-i ; j++) cout<<j<<" ";
        
        cout<<endl;
    }
}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of rows to print Number Triangle: ";
    cin>>numberOfRows;

    printInvertedRightNumberTriangle(numberOfRows);
    return 0;
}