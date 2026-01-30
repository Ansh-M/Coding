#include <iostream>
using namespace std;

int main(){
    float number=0.0;
    cout<<"Enter a Number( to check Range) : ";
    cin>>number;

    if(number >= 1){
        if(number <= 10) cout<<"Range : 1-10";
        else if(number <= 50) cout<<"Range : 11-50";
        else if(number <= 100) cout<<"Range : 51-100";
        else if(number <= 500) cout<<"Range : 101-500";
        else if(number <= 1000) cout<<"Range : 501-1000";
        else cout<<"above 1000";
    }else cout<<"Positive Numbers Only";
}