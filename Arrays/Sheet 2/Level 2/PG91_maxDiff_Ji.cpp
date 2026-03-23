#include<iostream>
using namespace std;

int maxDifferenceIffJi(int size){
    int arr[size];
    
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];
    
    int maxDiff = -1, largest = arr[0], smallest = arr[0];
    for(int i=0 ; i<size ; i++){
        int index = 0;
        for(int j=i+1 ; j<size ; j++){
            if(arr[j] > largest) {
                largest = arr[j];
                index = j;
            }
        }

        for(int j=0 ; j<index ; j++){
            if(arr[j] < smallest) {
                smallest = arr[j];
                maxDiff = largest - smallest;
            }
            else if(j == index-1) {
                if(maxDiff < largest - arr[i]) maxDiff = largest - arr[i];
                i = index;
            }
        }
    }
    
    char c =' '; 
    return maxDiff;
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    int maxDifference = maxDifferenceIffJi(size);
    
    if(maxDifference == -1) cout<<"\nNo Such Pair Found: "<<maxDifference;
    else cout<<"\nMax Difference when larger element comes after smaller: "<<maxDifference;
    return 0;
}