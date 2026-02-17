#include<iostream>
using namespace std;

void evenAndOddElements(int numElem){
    int positiveElements = 0 , negativeElements = 0, zeroes = 0;
    int arr[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        if(arr[i] > 0) positiveElements++;
        else if(arr[i] < 0) negativeElements++;
        else zeroes++;
    }

    cout<<"\nPositive Elements in Array are: "<<positiveElements;
    cout<<"\nNegative Elements in Array are: "<<negativeElements;
    cout<<"\nZeroes in Array are: "<<zeroes;
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    evenAndOddElements(numberOfElements);

    return 0;
}