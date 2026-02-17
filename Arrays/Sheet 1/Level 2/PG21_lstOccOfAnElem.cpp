#include<iostream>
using namespace std;

int lastOccurenceOfANumber(int numElem){    
    int arr[numElem + 1];
    arr[numElem] = -1;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    int number = 0;  
    cout<<"\n";
    cout<<"Enter a Number to find last Occurence in the Array: ";
    cin>>number;

    for(int i=0 ; i<numElem ; i++){
        if(arr[i] == number){
            arr[numElem] = i + 1;
        }
    }
    
    return arr[numElem];    
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    int lastPosition = lastOccurenceOfANumber(numberOfElements);

    if(lastPosition == -1) cout<<endl<<lastPosition;
    else cout<<endl<<lastPosition;

    return 0;
}