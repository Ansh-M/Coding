#include<iostream>
using namespace std;

void printHollowSquare(int numRows){
    for(int i=1 ; i<=numRows ; i++){
        for(int j=1 ; j<=numRows ; j++){
            if(i == 1 || i==numRows) cout<<j<<" ";
            else{
                if(j==1 || j==numRows) cout<<j<<" ";
                else cout<<"  ";
            }
        }
        
        cout<<endl;
    }

}

int main(){
    int numberOfRows = 0;
    cout<<"Enter a Number of Rows: ";
    cin>>numberOfRows;

    printHollowSquare(numberOfRows);
    return 0;
}