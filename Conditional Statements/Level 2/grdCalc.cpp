#include <iostream>
using namespace std;

int main(){
    float marks;
    cout<<"Enter marks(out of 100) : ";
    cin>> marks;
    
    if(marks >= 40){
        if(marks < 60) cout<<"E";
        else if(marks < 70) cout<<"D";
        else if(marks < 80) cout<<"C";
        else if(marks < 90) cout<<"B";
        else cout<<"A";
    }else cout<<"F";

    return 0;
}