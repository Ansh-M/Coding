#include<iostream>
using namespace std;

int maxAreaContainer(int size){
    int arr[size] ;

    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int maxArea = 0;
    for(int i=0 ; i<size ; i++){
        
        for(int j=i+1 ; j<size ; j++){
            if(arr[i] <= arr[j] && maxArea < (arr[i] * (j-i) )) maxArea = arr[i] * (j-i);
            
            else if(arr[j] < arr[i] && maxArea < (arr[j] * (j-i))) maxArea = arr[j] * (j-i);
        }
    }
    
    return maxArea;
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;
        
    int  maxArea = maxAreaContainer(size);
    cout<<"\nContainer With Most Water: "<<maxArea;

    return 0;
}