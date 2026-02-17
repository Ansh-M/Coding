#include<iostream>
using namespace std;

void sumOfArrayElements(int numElem){
    int arr[numElem+1];
    arr[numElem] = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        arr[numElem] += arr[i];
    }

    cout<<"Sum Of Array Elements: "<<arr[numElem];
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    sumOfArrayElements(numberOfElements);

    return 0;
}