#include<iostream>
using namespace std;

void printNumberGrid(int numRows){

    for(int i=1 ; i<=numRows ; i++){
        cout<<"\nTable of "<<i<<endl;
        for(int j=1 ; j<=10 ; j++){
            cout<<i<<" x "<<j<<": "<<i*j<<endl;
        }

        cout<<endl;
    }
}

int main(){
    int number=0;
    cout<<"Enter a number to print Table Grid Upto: ";
    cin>>number;

    printNumberGrid(number);
    return 0;
}