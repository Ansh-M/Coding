#include<iostream>
using namespace std;

void comparisonToANumber(int numElem){
    float arr[numElem+1];
    arr[numElem] = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    int number = 0;
    cout<<"Enter a Number to Compare with Array Elements: ";
    cin>>number;
    for(int i=0 ; i<numElem ; i++){
        if(arr[i] < number) arr[numElem]++;
    }

    cout<<"\nArray Elements smaller than "<<number<<" are: "<<arr[numElem];
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    comparisonToANumber(numberOfElements);

    return 0;
}