#include<iostream>
using namespace std;

void smallestArrayElement(int numElem){    
    int arr[numElem+1];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }
    
    arr[numElem] = arr[0];
    
    cout<<"\n";
    for(int i=1 ; i<numElem ; i++){
        if(arr[i] <= arr[numElem]) arr[numElem] = arr[i];
    }

    cout<<"\nSmallest Element in the Array: "<<arr[numElem];

}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    smallestArrayElement(numberOfElements);

    return 0;
}