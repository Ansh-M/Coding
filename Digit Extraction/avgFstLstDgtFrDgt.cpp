// #include<iostream>
// using namespace std;

// int main(){
//     int number=0, firstDigit=0, lastDigit=0, average=0;
//     cout<<"Enter a 4 digit number : ";
//     cin>>number;

//     firstDigit = number/1000;
//     lastDigit = number%10;
//     average = (firstDigit + lastDigit)/2;
    
//     cout<<"Average of 1st and last digit : "<<average; 
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int number=0, average=0;
    cout<<"Enter a 4 digit number : ";
    cin>>number;

    average = number/1000;
    average = (average + number%10)/2;
    cout<<"Average of 1st and last digit : "<<average;

    return 0;
}