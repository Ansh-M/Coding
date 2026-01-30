// #include<iostream>
// using namespace std;

// int main(){
//     int number=0, firstDigit=0, lastDigit=0;
//     cout<<"Enter a 3 digit number : ";
//     cin>>number;

//     firstDigit = number/100;
//     lastDigit = number%10;
//     number = number - (firstDigit*100) - lastDigit;
//     number = number + (lastDigit*100) + firstDigit;
    
//     cout<<"1st and last digit swapped : "<<number; 
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int number=0, firstDigit=0, lastDigit=0;
    cout<<"Enter a 3 digit number : ";
    cin>>number;

    firstDigit = number/100;
    lastDigit = number%10;

    firstDigit = firstDigit + lastDigit;
    lastDigit = firstDigit - lastDigit;
    firstDigit = firstDigit - lastDigit;
    number = (number/10)%10;
    number = (firstDigit*100) + number*10 + lastDigit;
    
    cout<<"1st and last digit swapped : "<<number; 
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int number=0, firstDigit=0, lastDigit=0;
//     cout<<"Enter a 4 digit number : ";
//     cin>>number;

//     firstDigit = number/1000;
//     lastDigit = number%10;
//     number = number - (firstDigit*1000) - lastDigit;
//     number = number + (lastDigit*1000) + firstDigit;
    
//     cout<<"1st and last digit swapped : "<<number; 
//     return 0;
// }