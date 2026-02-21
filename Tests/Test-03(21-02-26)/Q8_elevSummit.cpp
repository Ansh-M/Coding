#include<iostream>
using namespace std;

int summitOfTrail(int number, int arr[]){
    int summit = 0;
    if(arr[0] > arr[1]) return 0;
    else if(arr[number-2] < arr[number-1]) return 0;
    else{
        for(int i=0 ; i<number ; i++){
            if(arr[i] > summit) summit = arr[i];
            if(arr[i+1] < summit){
               for(int j=i+1 ; j<number ; j++){
                if(arr[i] < arr[j] || summit < arr[j]) return 0;
               } 
            }
        }
        return summit;
    }
}

int main(){
    int number = 0;
    cin>>number;
    
    int arr[number];

    int count = 0;
    if(number < 3 || number > 10000) cout<<"Null";
    else{
        cout<<endl;
        for(int i=0 ; i<number ; i++){
            cin>>arr[i];
            if(arr[i] < 0 || arr[i] > 100000000){
                cout<<"Null";
                break;
            }
        }
    }
    int summit = summitOfTrail(number, arr);
    cout<<"\n"<<summit;

    return 0;
}