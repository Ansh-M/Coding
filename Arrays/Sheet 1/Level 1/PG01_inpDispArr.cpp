#include<iostream>
using namespace std;

void inputAndDisplay(int numElem){
    int arr[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    inputAndDisplay(numberOfElements);

    return 0;
}