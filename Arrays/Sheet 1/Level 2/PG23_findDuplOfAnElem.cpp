#include<iostream>
using namespace std;

void duplicatesOfANumberInAnArray(int numElem){    
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
                if(arr[j] == arr[i]) count++;
        
                if(count >= 2){
                    cout<<"\nDuplicate of "<<arr[i]<<": ";
                    cout<<"Yes"<<endl;
                    arr1[j] = true;
                    break;

                }else if(count == 1 && j == numElem-1){
                    cout<<"\nDuplicate of "<<arr[i]<<": ";
                    cout<<"No"<<endl;
                }
            }else break;
        
        }
    }
        
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    
    duplicatesOfANumberInAnArray(numberOfElements);
    return 0;
}