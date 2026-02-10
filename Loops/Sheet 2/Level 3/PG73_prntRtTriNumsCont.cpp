#include<iostream>
using namespace std;

void printRightNumberTriangleContinuous(int numRows){
    int j=1;
    for(int i=1 ; i<=numRows ; i++){
        for(int k=i ; k!=0 ; k--){
            cout<<j<<" ";
            j++;
        }
        
        cout<<endl;
    }

}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of rows to print Number Triangle: ";
    cin>>numberOfRows;

    printRightNumberTriangleContinuous(numberOfRows);
    return 0;
}