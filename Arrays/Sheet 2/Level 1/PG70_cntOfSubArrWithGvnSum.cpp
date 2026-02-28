#include<iostream>
using namespace std;

void countOfSubArrayWithGivenSum(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a number: ";
    cin>>number;

    cout<<"\nNumber of Sub Arrays with Matching Sum: ";
    if(size <= 0) cout<<"No Sub-Arrays";
    else{
        int sum = 0;
        int count = 0;
        for(int i=0 ; i<size ; i++){
            sum = 0;
        
            for(int j=i ; j<size && sum<=number ; j++){
            
                sum += arr[j];
                if(sum == number) count++;
            }
            
        }
        
        cout<<count;
    }

}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    countOfSubArrayWithGivenSum(size);
    return 0;
}