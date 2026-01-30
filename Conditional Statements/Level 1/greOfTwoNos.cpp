#include <iostream>
using namespace std;

int main(){
    int firstNo=0, secondNo=0;
    cout<<"Enter 2 Numbers : ";
    cin>>firstNo;
    cin>>secondNo;
    
    if(firstNo > secondNo){
        cout<<"First Number is greater";
    }else if (firstNo < secondNo){
        cout<<"Second Number is greater";
    }else{
        cout<<"Both are equal";
    }
}