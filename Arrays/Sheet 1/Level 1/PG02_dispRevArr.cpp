#include<iostream>
using namespace std;

void inputAndDisplayReverse(int numElem){
    int arr[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=numElem-1 ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    inputAndDisplayReverse(numberOfElements);

    return 0;
}