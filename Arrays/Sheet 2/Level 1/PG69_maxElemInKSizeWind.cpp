#include<iostream>
using namespace std;

void maxElementInKSizedWindow(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int windowSize = 0;
    cout<<"\nEnter a window size to take that may elements into account: ";
    cin>>windowSize;

    cout<<"\nMax Element in each "<<windowSize<<" sized Window: "<<endl;
    int maxElem = 0;
    for(int i=0 ; i<=size-windowSize ; i++){
        
        for(int j=i ; j<windowSize+i ; j++){
            if(j == i) maxElem = arr[i];
            if(maxElem < arr[j]) maxElem = arr[j]; 
        }

        cout<<maxElem<<" [Window:";
        for(int j=i ; j<windowSize+i ; j++) cout<<" "<<arr[j];
        cout<<"]"<<endl;

    }

}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    maxElementInKSizedWindow(size);
    return 0;
}