#include <iostream>
using namespace std;

int main(){
    char alphabet;
    cout<<"Enter an Alphabet to know its position : ";
    cin>>alphabet;

    if((int(alphabet) >= int('A') && int(alphabet) <= int('M')) || (int(alphabet) >= int('a') && int(alphabet) <= int('m')))
        cout<<"First Half of the Alphabets";
    else if((int(alphabet) > int('M') && int(alphabet) <= int('Z')) || (int(alphabet) > int('m') && int(alphabet) <= int('z'))) 
        cout<<"Second Half of the Alphabets";
    else cout<<"Invalid Character";
}