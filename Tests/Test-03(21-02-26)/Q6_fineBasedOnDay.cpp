#include<iostream>
using namespace std;

int fineToBePaid(int number, int arr[], int day, int fine){
    int count = 0;
    for(int i=0 ; i<number ; i++){
        if(arr[i] % 2 == 1 && day % 2==0) count++;
        else if(arr[i] % 2 == 0 && day % 2 == 1) count++;
    }

    fine = fine*count;

    return fine;
}

int main(){
    int number = 0, day = 0, fine = 0;
    cin>>number;
    
    int arr[number];

    int count = 0;
    if(number < 0 || number > 100) cout<<"Null";
    else{
        cout<<endl;
        for(int i=0 ; i<number ; i++){
            cin>>arr[i];
            if(arr[i] < 1 || arr[i] > 9){
                cout<<"Null";
                break;
            }
        }
    }
    
    cin>>day>>fine;
    
    if(day < 1 || day > 30) cout<<"\nNull";
    else if(fine < 100 || fine > 5000) cout<<"\nNull";
    else fine = fineToBePaid(number, arr, day, fine);

    cout<<"\n"<<fine;

    return 0;
}