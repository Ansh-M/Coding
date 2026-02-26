#include<iostream>
using namespace std;

void findRangeOfElements(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int largestElement = arr[0], smallestElement = arr[0];
    for(int i=1 ; i<size ; i++){

        if(arr[i] > largestElement) largestElement = arr[i];
        else if(arr[i] < smallestElement) smallestElement = arr[i];
    }

    cout<<"\nElements between ["<<smallestElement<<" - "<<largestElement<<"]"<<endl;
}

int main(){
    int size = 0;
    cout<<"Range Of Elements"<<endl;
    cout<<"Enter size of array: ";
    cin>>size;

    findRangeOfElements(size);
    return 0;
}