#include<iostream>
using namespace std;

void sumOfOddElements(int numElem){
    int arr[numElem+1];
    arr[numElem] = 1;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        arr[numElem] *= arr[i];
    }

    cout<<"Product Of Array Elements: "<<arr[numElem];
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    sumOfOddElements(numberOfElements);

    return 0;
}