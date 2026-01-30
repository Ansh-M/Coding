#include<iostream>
using namespace std;

void isPronic(int num){
    int n1=0;
    if(num==n1*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else if(num==(++n1)*(n1+1)) cout<<"Pronic Number";
    else cout<<"Not a Pronic Number";
    
}

int main(){
    int number=0;
    cout<<"Enter a 2 digit number: ";
    cin>>number;

    isPronic(number);
    
    return 0;
}

// #include<iostream>
// using namespace std;

// int isPronic(int num){
//     int n1=0, flag=0;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     n1++;
//     if(num==n1*(n1+1)) return flag=1;
//     else return flag;
    
// }

// int main(){
//     int number=0;
//     cout<<"Enter a 2 digit number: ";
//     cin>>number;

//     int flag=isPronic(number);
//     if(flag==1) cout<<"Pronic Number";
//     else cout<<"Not a Pronic Number";
    
//     return 0;
// }