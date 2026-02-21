#include<iostream>
using namespace std;

int numberOfElements(int number, int arr[]){
    int count = 0;

    for(int i=0 ; i<number ; i++){
        if(i==0) count++;
        else if(arr[i] > arr[i-1]){
                for(int j=i-1 ; j>=0 ; j--){
                    if(arr[i] >= arr[j]){
                        if(j == 0) count++;
                    }else break;
                }
        }
    }
    
    return count;
}

int main(){
    int number = 0;
    cin>>number;
    
    int arr[number];

    int count = 0;
    if(number < 1 || number > 20) cout<<"Null";
    else{
        cout<<endl;
        for(int i=0 ; i<number ; i++){
            cin>>arr[i];
            if(arr[i] < 1 || arr[i] > 10000){
                cout<<"Null";
                break;
            }
        }
        
        count = numberOfElements(number, arr);
        cout<<"\n"<<count;
    }

    return 0;
}