#include<iostream>
using namespace std;

void checkElementInArray(int numElem){    
    int arr[numElem];

    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    int number = 0;
    cout<<"Enter a Number to Check if present in Array: ";
    cin>>number;
    for(int i=0 ; i<numElem ; i++){
        if(arr[i] == number){
            cout<<"\nFound!";
            break;
        }else if(i == numElem-1) cout<<"\nNot Found!";
    }

}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    checkElementInArray(numberOfElements);

    return 0;
}