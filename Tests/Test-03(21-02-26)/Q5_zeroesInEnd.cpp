#include<iostream>
using namespace std;

void rotateLeft(int arr[], int i, int number){
    for( ; i<number ; i++) arr[i] = arr[i+1];
}

void zeroesInEnd(int number, int arr[]){
    int count = 0;

    for(int i=0 ; i<number ; i++){
        if(arr[i] == 0){
            int temp = arr[i];
            rotateLeft(arr, i, number);
            arr[number-1] = temp;
        }       
    }

    for(int i=0 ; i<number ; i++) cout<<arr[i]<<" ";
}

int main(){
    int number = 0;
    cin>>number;
    
    int arr[number];

    int count = 0;
    if(number < 1 || number > 10000) cout<<"Null";
    else{
        cout<<endl;
        for(int i=0 ; i<number ; i++){
            cin>>arr[i];
            if(arr[i] < 0 || arr[i] > 100000000){
                cout<<"Null";
                break;
            }
        }
        
        zeroesInEnd(number, arr);
    }

    return 0;
}