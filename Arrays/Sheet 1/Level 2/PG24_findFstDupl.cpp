#include<iostream>
using namespace std;

void firstduplicateOfANumberInAnArray(int numElem){    
    int arr[numElem], count = 0;
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    int number = 0;  
    cout<<"\n";
    cout<<"Enter a Number to find first duplicate in the Array: ";
    cin>>number;

    for(int i=0 ; i<numElem ; i++){
        if(arr[i] == number){
            ++count;

        }   
    
        if(count == 1 && i == numElem-1) {
            cout<<"No Duplicates for this Number";
        }else if(count >= 2){
            cout<<"Yes";
            break;
        }else if(i == numElem-1) cout<<"This Number Doesn't exist";
    }
        
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    
    firstduplicateOfANumberInAnArray(numberOfElements);
    return 0;
}