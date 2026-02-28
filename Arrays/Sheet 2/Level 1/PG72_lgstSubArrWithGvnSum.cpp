#include<iostream>
using namespace std;

void longestSubArrayWithGivenSum(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a number: ";
    cin>>number;

    cout<<"\nLength of Longest Sub Array with Matching Sum: ";
    if(size <= 0) cout<<"No Sub-Arrays";
    else{
        int sum = 0;
        int count = 0;
        for(int i=0 ; i<size ; i++){
            sum = 0;
        
            for(int j=i ; j<size && sum<=number ; j++){
            
                sum += arr[j];
                if(sum == number){
                    if(count < j-i+1) count = j-i+1;
                }
            }
            
        }
        
        cout<<count;
    }

}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    longestSubArrayWithGivenSum(size);
    return 0;
}