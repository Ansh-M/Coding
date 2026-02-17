#include<iostream>
using namespace std;

void smallestArrayElement(int numElem){    
    int arr[numElem+2];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }
    
    arr[numElem] = arr[0];
    arr[numElem + 1] = arr[0];
    
    cout<<"\n";
    for(int i=1 ; i<numElem ; i++){
        if(arr[i] >= arr[numElem]) arr[numElem] = arr[i];
        else if(arr[i] < arr[numElem + 1]) arr[numElem + 1] = arr[i];
    }

    cout<<"\nLargest Element in the Array: "<<arr[numElem];
    cout<<"\nSmallest Element in the Array: "<<arr[numElem+1];

}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    smallestArrayElement(numberOfElements);

    return 0;
}