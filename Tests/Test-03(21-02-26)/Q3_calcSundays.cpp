#include<iostream>
using namespace std;

int calculateSundays(string day, int number){
    int count = 1, diff = 0;
    if(day == "mon"){
        diff=6;
    }
    else if(day == "tue"){
        diff=5;
    }
    else if(day == "wed"){
        diff=4;
    }
    else if(day == "thu"){
        diff=3;
    }
    else if(day == "fri"){
        diff=2;
    }
    else if(day == "sat"){
        diff=1;
    }
    else if(day == "sun"){
        diff=0;
        count = 0;
    }

    for(int i=1 ; i<=number-diff ; i=i+7) count++;
    return count;
}

int main(){
    int number = 0;
    string day="";
    cin>>day>>number;
    
    int numberOfSundays = 0;
    if(number < 1 || number > 365) cout<<"Null";
    else{
        numberOfSundays = calculateSundays(day, number);
        cout<<"\n"<<numberOfSundays;
    } 
    return 0;
}