#include<iostream>
using namespace std;

void printThreeElementsWithGivenSum(int size){
    int arr[size];
    cout<<"\nEnter array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a Number to check if any three array elements can make it: ";
    cin>>number;

    cout<<"\nPair of Elements: ";
    bool flag = false;
    for(int i=0 ; i<size ; i++){
        for(int k=i+1 ; k<size ; k++){
            
            for(int j=size-1 ; j>k ; j--){
               
               if((arr[i] + arr[k] + arr[j]) == number){
                  flag = true;
                  cout<<"("<<arr[i]<<" , "<<arr[k]<<" , "<<arr[j]<<") ";
                  break;
               }
            }
            if(flag == true) break;
        }

        if(flag == true) break;
        else if(i == size-1 && flag == false) cout<<"No three Elements make up the number";
        // if(i == size-1 && flag == false) cout<<"No three Elements make up the number";
    }

}


int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    if(size < 3) cout<<"\nArray must have atleast 3 elements";
    else printThreeElementsWithGivenSum(size);
    return 0;
}