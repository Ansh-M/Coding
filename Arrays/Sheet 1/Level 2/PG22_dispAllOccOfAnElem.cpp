#include<iostream>
using namespace std;

void printOccurencesOfANumber(int numElem){    
    int arr[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    int number = 0;  
    cout<<"\n";
    cout<<"Enter a Number to find all Occurences in the Array: ";
    cin>>number;

    for(int i=0 ; i<numElem ; i++){
        if(arr[i] == number){
            cout<<i+1<<endl;
        }else if(i == numElem-1) cout<<"-1";
    }
    
        
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    
    printOccurencesOfANumber(numberOfElements);
    return 0;
}