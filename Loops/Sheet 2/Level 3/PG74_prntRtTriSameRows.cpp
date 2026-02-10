#include<iostream>
using namespace std;

void printRightNumberTriangleSameRows(int numOfRows){
    for(int i=1 ; i<=numOfRows ; i++){
        for(int j=1 ; j<=i ; j++) cout<<i<<" ";
        
        cout<<endl;
    }
}


int main(){
    int numberOfRows = 0;
    cout<<"Enter a number: ";
    cin>>numberOfRows;
    
    printRightNumberTriangleSameRows(numberOfRows);
    return 0;
}