#include<iostream>
using namespace std;

void avgOfArrayElements(int numElem){
    float arr[numElem+1];
    arr[numElem] = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        arr[numElem] += arr[i];
    }

    cout<<"Average Of Array Elements: "<<arr[numElem]/numElem;
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    avgOfArrayElements(numberOfElements);

    return 0;
}