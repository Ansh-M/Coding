#include<iostream>
using namespace std;

void printIndicesOfSubArrayWithGivenSum(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    
    cout<<"\nEnter a number: ";
    cin>>number;

    cout<<"\nIndices of Sub Arrays with Matching Sum"<<endl;
    if(size <= 0) cout<<"No Sub-Arrays";
    else{
        int sum = 0;
        bool flag = false;
        
        for(int i=0 ; i<size ; i++){
            sum = 0;
        
            for(int j=i ; j<size && sum<=number ; j++){
            
                sum += arr[j];
                if(sum == number){
                    flag = true;
                    cout<<i<<" To "<<j<<endl;
                }
            }
            if(i == size-1 && flag == false) cout<<"No Sub Arrays";
        }
    }

}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    printIndicesOfSubArrayWithGivenSum(size);
    return 0;
}