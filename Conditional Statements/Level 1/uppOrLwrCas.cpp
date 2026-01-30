#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"Enter a single character : ";
    cin>>character;

    if(character >= int('a') && character<=int('z')){
        cout<<"LowerCase";
    }else{
        cout<<"UpperCase";
    }
    
    return 0;
}