#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"Enter a single character : ";
    cin>>character;

    if(character == 'a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O' ||character=='U'){
        cout<<"Vowel";
    }else{
        cout<<"Consonant";
    }
    
    return 0;
}