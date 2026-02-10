#include<iostream>
using namespace std;

void printBinaryPattern(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        int k=1;
        for(int j=1 ; j<=i ; j++){
            if(i % 2 == 1){
                if(k < 0) k=1;
                cout<<k<<" ";
                k--;
            }else{
                if(k == 0) k=2;
                cout<<--k<<" ";
            }
        }

        cout<<endl;
    }
}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of rows to print Binary Pattern: ";
    cin>>numberOfRows;

    printBinaryPattern(numberOfRows);
    return 0;
}