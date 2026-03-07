#include<iostream>
using namespace std;

void maxProdSubArray(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    
    cout<<"\nProduct of Sub Array with Max Product: ";
    if(size <= 0) cout<<"0";
    else{
        int product = 1, maxProduct = 0;
        bool flag = false;
        int index1 = 0, index2 = 0;
        
        for(int i=0 ; i<size ; i++){
            product = 1;
            
            if(i == 0) maxProduct = arr[i];

            for(int j=i ; j<size ; j++){
                
                product *= arr[j];
                if(maxProduct < product){
                    maxProduct = product;
                    index1 = i;
                    index2 = j;
                }
            }
        }
        cout<<maxProduct;
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

    maxProdSubArray(size);
    return 0;
}