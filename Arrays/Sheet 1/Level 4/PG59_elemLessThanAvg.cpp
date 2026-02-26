#include<iostream>
using namespace std;

int elementsSmallerThanAverage(int size){
    int arr[size];

    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int count = 0;
    float average = 0;
    
    if(size % 2 == 0){
        for(int i=0 ; i<=size/2 ; i++){
            average += arr[i] + arr[size-i-1];
        }
        average = average/float(size);

        for(int i=0 ; i<=size/2 ; i++){
            if(arr[i] < average) count++;
            if(arr[size-1-i] < average) count++;
        }
        
    }else{
        for(int i=0 ; i<=size/2 ; i++){
            if(i == (size-1)/2) average += arr[i];
            else average += arr[i] + arr[size-i-1];
        }
        average = average/float(size);
        
        for(int i=0 ; i<=size/2 ; i++){
            if(i == (size-1)/2 && arr[i] < average) count++;
            else{
                if(arr[i] < average) count++;
                if(arr[size-1-i] < average) count++;
            }  
        }
    }
    
    return count;
}


int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    int count = elementsSmallerThanAverage(size);
    cout<<"\nCount Of Elements smaller than average: "<<count;
    return 0;
}