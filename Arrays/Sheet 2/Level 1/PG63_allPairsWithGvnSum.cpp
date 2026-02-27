#include<iostream>
using namespace std;

void printAllPairWithGivenSum(int size){
    int arr[size];
    cout<<"\nEnter array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a Number to check how many two array elements can make it: ";
    cin>>number;

    cout<<"\nPair of Elements: ";
    bool flag = false;
    
    for(int i=0 ; i<size ; i++){
        for(int j=size-1 ; j>i ; j--){
            
            if(arr[i] + arr[j] == number){
                
                if(flag == false) flag = true;
                cout<<"("<<arr[i]<<" , "<<arr[j]<<") ";
                break;
            }
        }

        if(i == size-1 && flag == false) cout<<"No two Elements make up the number";
    }

}


int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    printAllPairWithGivenSum(size);
    return 0;
}