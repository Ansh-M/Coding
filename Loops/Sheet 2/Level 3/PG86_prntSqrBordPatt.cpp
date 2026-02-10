#include<iostream>
using namespace std;

void printSquareBorderPattern(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        
        
        cout<<endl;
    }

}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of Rows to print Square Border Pattern: ";
    cin>>numberOfRows;

    printSquareBorderPattern(numberOfRows);
    return 0;
}