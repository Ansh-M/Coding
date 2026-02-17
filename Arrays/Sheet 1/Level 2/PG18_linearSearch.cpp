#include<iostream>
using namespace std;

int linearSearch(int numElem){    
    int arr[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
    }

    int number = 0;  
    cout<<"\n";
    cout<<"Enter a Number to Search in the Array: ";
    cin>>number;

    for(int i=0 ; i<numElem ; i++){
        if(arr[i] == number){
            return i+1;
        }
    }
    
    return -1;    
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    int position = linearSearch(numberOfElements);

    if(position == -1) cout<<endl<<position;
    else cout<<endl<<position;

    return 0;
}