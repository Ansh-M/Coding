#include<iostream>
using namespace std;

void checkArrayPalindrome(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nIs Array Palindrome: ";
    
    if(arr[0] != arr[size-1]) cout<<"No"<<endl;
    else{
        for(int i=1 ; i<size-1/2 ; i++){
            if(arr[i] != arr[size-1-i]){
                cout<<"No"<<endl;
                break;

            }else if(i == (size-1)/2) cout<<"Yes";
        }
    }
}

int main(){
    int size = 0;
    cout<<"Enter size: ";
    cin>>size;

    checkArrayPalindrome(size);
    return 0;
}