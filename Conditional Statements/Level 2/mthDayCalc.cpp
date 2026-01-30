#include <iostream>
using namespace std;

int main(){
    int month=0, year=0;
    cout<<"Enter Month Number and Year : ";
    cin>>month>>year;
    
    if(month != 2){
        if (month == 4 || month == 6 || month == 9 || month == 11) cout<<"30 days";
        else cout<<"31 days";
    }else{
        if(year%4 == 0 && (year%100 != 0 || year%400 ==0)) cout<<"29 days(leap year)";
        else cout<<"28 days";
    }
    return 0;
}