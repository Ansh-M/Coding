#include<iostream>
using namespace std;

void printPalindromePattern(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        for(int j=1 ; j<i ; j++) cout<<j<<" ";
        for(int j=i ; j>=1 ; j--) cout<<j<<" ";
        
        cout<<endl;
    }
}

int main(){
    int numberOfRows=0;
    cout<<"Enter number of rows to print Number Palindrome: ";
    cin>>numberOfRows;

    printPalindromePattern(numberOfRows);
    return 0;
}