#include<iostream>
using namespace std;

void printFloydsTriangle(int numRows){

    int k=1;
    for(int i=1 ; i<=numRows ; i++){
        for(int j=1 ; j<=i ; j++) cout<<k++<<" ";
        
        cout<<endl;
    }

}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of Rows to print Floyd's Triangle: ";
    cin>>numberOfRows;

    printFloydsTriangle(numberOfRows);
    return 0;
}