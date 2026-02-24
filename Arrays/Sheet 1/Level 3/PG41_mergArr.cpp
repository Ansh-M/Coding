#include<iostream>
using namespace std;

void mergeArrays(int sizeOfArrayOne, int sizeOfArrayTwo){
    
    int arr1[sizeOfArrayOne], arr2[sizeOfArrayTwo];
    cout<<"\nEnter Elements for Array1: ";
    for(int i=0 ; i<sizeOfArrayOne ; i++) cin>>arr1[i];
    cout<<"\nAnd Now Array2: ";
    for(int i=0 ; i<sizeOfArrayTwo ; i++) cin>>arr2[i];
    
    int arr3[sizeOfArrayOne + sizeOfArrayTwo];

    int j=0;
    for(int i=0 ; i<sizeOfArrayOne + sizeOfArrayTwo ; i++){
        if(i <= sizeOfArrayOne-1){
            arr3[i] = arr1[i];
        }
        
        if(i>=sizeOfArrayOne){
            arr3[i] = arr2[j];
            j++;
        }
    }
    
    cout<<"\nMerged Array 3: ";
    for(int i=0 ; i<sizeOfArrayOne+sizeOfArrayTwo ; i++) cout<<arr3[i]<<" ";
    
}

int main(){
    int sizeOfArrayOne = 0, sizeOfArrayTwo = 0;
    cout<<"Arrays Merged"<<endl;
    cout<<"Enter size of both arrays: ";
    cin>>sizeOfArrayOne>>sizeOfArrayTwo;

    mergeArrays(sizeOfArrayOne, sizeOfArrayTwo);
    return 0;
}