#include<iostream>
using namespace std;

int summitOfTrail(int number, int arr[]){
    int summit = 0;
    
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