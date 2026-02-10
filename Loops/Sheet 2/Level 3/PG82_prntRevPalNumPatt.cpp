#include<iostream>
using namespace std;

void printReversePalindromePattern(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        for(int j=1 ; j<(numRows+1)-i ; j++) cout<<j<<" ";
        for(int j=(numRows+1)-i ; j>=1 ; j--) cout<<j<<" ";

        cout<<endl;
    }
}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of rows to print Number Reverse Palindrome: ";
    cin>>numberOfRows;

    printReversePalindromePattern(numberOfRows);
    return 0;
}