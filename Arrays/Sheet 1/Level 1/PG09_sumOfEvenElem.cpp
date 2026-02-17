#include<iostream>
using namespace std;

void sumOfEvenElements(int numElem){
    int arr[numElem+1];
    arr[numElem] = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        if(arr[i] % 2 == 0) arr[numElem] += arr[i];
    }

    cout<<"Sum Of Array's Even Elements: "<<arr[numElem];
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    sumOfEvenElements(numberOfElements);

    return 0;
}