#include<iostream>
using namespace std;

void evenAndOddElements(int numElem){
    int arr[numElem+2];
    arr[numElem] = 0;
    arr[numElem + 1] = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0 ; i<numElem ; i++){
        if(arr[i] % 2 == 0) arr[numElem]++;
        else arr[numElem + 1]++;
    }

    cout<<"\nEven Elements in Array are: "<<arr[numElem];
    cout<<"\nOdd Elements in Array are: "<<arr[numElem+1];
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    evenAndOddElements(numberOfElements);

    return 0;
}