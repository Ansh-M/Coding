#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"Enter a single character : ";
    cin>>character;

    if((character >= int('a') && character<=int('z')) || (character >= int('A') && character<=int('Z'))){
        cout<<"Alphabet";
    }else if(character >= int('0') && character <= int('9')){
        cout<<"Digit";
    }else{
        cout<<"Special Character";
    }
    
    return 0;
}