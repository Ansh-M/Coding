#include<iostream>
using namespace std;

void maxSumSubArray(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    
    cout<<"\nSum of Sub Array with Max Sum: ";
    if(size <= 0) cout<<"0";
    else{
        int sum = 0, maxSum = 0;
        bool flag = false;
        int index1 = 0, index2 = 0;
        
        for(int i=0 ; i<size ; i++){
            sum = 0;
            
            if(i == 0) maxSum = arr[i];

            for(int j=i ; j<size ; j++){
                
                sum += arr[j];
                if(maxSum < sum){
                    maxSum = sum;
                    index1 = i;
                    index2 = j;
                }
            }
        }
        cout<<maxSum;
        cout<<"\n[Sub-Array: ";
        while(index1 <= index2){
            cout<<arr[index1]<<" ";
            index1++;
        }
        cout<<"]"<<endl;
        
    }
}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    maxSumSubArray(size);
    return 0;
}