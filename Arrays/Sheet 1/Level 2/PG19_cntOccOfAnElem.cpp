#include<iostream>
using namespace std;

int countOccurencesOfANumber(int numElem){    
    int arr[numElem + 1];
    arr[numElem] = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    int number = 0;  
    cout<<"\n";
    cout<<"Enter a Number to find Occurences in the Array: ";
    cin>>number;

    for(int i=0 ; i<numElem ; i++){
        if(arr[i] == number){
            arr[numElem]++;
        }
    }
    
    return arr[numElem];    
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    int count = countOccurencesOfANumber(numberOfElements);

    cout<<endl<<"Number appears: ";
    if(count == 1) cout<<count<<" time";
    else cout<<count<<" times";

    return 0;
}