#include<iostream>
using namespace std;

void firstElementwithDuplicate(int numElem){    
    int arr[numElem], distDup = numElem-1, temp = 0;
    bool arr1[numElem];
    
    cout<<"Enter Elements: ";
    for(int i=0 ; i<numElem ; i++){
        cin>>arr[i];
        arr1[i] = false;
    }
  
    cout<<"\n";

    for(int i=0 ; i<numElem ; i++){
        int count = 1, cnt = 0; 
        
        for(int j=i+1 ; j<numElem ; j++){
            if(arr1[i] != true){
                if(arr[j] == arr[i]) count++;
                cnt++;
        
                if(count >= 2){
                    arr1[j] = true;
                    break;
                }

            }else break;
        }
        
        if(cnt < distDup && count>=2){
            distDup = cnt;
            temp = arr[i];
        }
    }
    cout<<"First Element with Duplicate : "<<temp;
        
}

int main(){
    cout<<"Enter size of Array: ";
    int numberOfElements = 0;
    cin>>numberOfElements;
    
    firstElementwithDuplicate(numberOfElements);
    return 0;
}