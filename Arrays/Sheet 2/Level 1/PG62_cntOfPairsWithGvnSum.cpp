#include<iostream>
using namespace std;

void countAllPairWithGivenSum(int size){
    int arr[size];
    cout<<"\nEnter array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a Number to check how many two array elements can make it: ";
    cin>>number;

    int count = 0;
    
    cout<<"\nNumber of Pair of Elements: ";
    for(int i=0 ; i<size ; i++){
        for(int j=size-1 ; j>i ; j--){
            
            if(arr[i] + arr[j] == number){
                count++;
                break;
            }
        }
        
        if(i == size-1 && count == 0) cout<<count;
        else if(i == size-1 && count != 0) cout<<count;
    }

}


int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    countAllPairWithGivenSum(size);
    return 0;
}