#include<iostream>
using namespace std;

void indexOfSmallestArrayElement(int numElem){    
    int arr[numElem+2];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }
    
    arr[numElem] = arr[0];
    arr[numElem + 1] = 1;
    
    cout<<"\n";
    for(int i=1 ; i<numElem ; i++){
        if(arr[i] <= arr[numElem]){
            arr[numElem] = arr[i];
            arr[numElem+1] = i+1;
        }
    }

    cout<<"\nIndex Of Smallest Element in the Array: "<<arr[numElem+1];

}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    indexOfSmallestArrayElement(numberOfElements);

    return 0;
}