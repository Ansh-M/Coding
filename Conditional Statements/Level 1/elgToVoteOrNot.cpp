#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age(<100) : ";
    cin>>age;

    if(age >= 18){
        cout<<"Ellgible to Vote";
    }else{
        cout<<"Not Elligible to Vote";
    }
    
    return 0;
}