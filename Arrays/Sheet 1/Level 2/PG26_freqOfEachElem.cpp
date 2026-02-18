#include<iostream>
using namespace std;

void frequencyOfANumberInAnArray(int numElem){    
    int arr[numElem], count = 0;
    bool arr1[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
        arr1[i] = false;
    }
  
    cout<<"\n";

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
        if(count >= 2){
            cout<<"\nFrequency of "<<arr[i]<<": "<<count<<endl;
        }else if(count == 1){
            cout<<"\nFrequency of "<<arr[i]<<": "<<count<<endl;
        }

    }
        
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    
    frequencyOfANumberInAnArray(numberOfElements);
    return 0;
}