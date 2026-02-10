#include<iostream>
using namespace std;

void printRightNumberTriangle(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        for(int j=i ; j>=1 ; j--) cout<<" ";
        for(int j=1 ; j<=numRows-i+1 ; j++) cout<<j<<" ";
        
        cout<<endl;
    }
}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of rows to print Number Triangle: ";
    cin>>numberOfRows;

    printRightNumberTriangle(numberOfRows);
    return 0;
}