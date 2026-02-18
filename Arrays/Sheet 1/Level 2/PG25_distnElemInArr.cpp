#include<iostream>
using namespace std;

void distinctNumbersInAnArray(int numElem){    
    int arr[numElem], count = 0;
    bool arr1[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
        arr1[i] = false;
    }
  
    cout<<"\nDistinct Elements in the Array: ";

    for(int i=0 ; i<numElem ; i++){
        count = 0; 
        for(int j=0 ; j<numElem ; j++){
            if(arr1[i] != true){
                if(arr[j] == arr[i]){
                    count++;
                    
                    if(count >= 2) arr1[j] = true;
                }
            }else break;
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }

    }
        
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    
    distinctNumbersInAnArray(numberOfElements);
    return 0;
}