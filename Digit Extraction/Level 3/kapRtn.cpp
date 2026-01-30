#include<iostream>
using namespace std;

void kaprekarRoutine(int num){
    // int digit=0, digit1=0;
    // if(digit1 < num % 10){ // 0 < 3524->4 
    //     digit = digit + num % 10;
    //     digit1 = num % 10;
    //     num = num / 10;
    // }else{
    //     if(digit % 10 < num % 10){
    //         digit = (digit-digit%10 + num%10)*10 + digit%10;
    //     }else{
    //         digit = digit*10 + num%10;
    //     }
    //     num = num / 10;
    // }

    // if(digit1 < num % 10){ // 4 < 352->2 
    //     digit = digit + (num % 10)*10;
    //     digit1 = num % 10;
    //     num = num / 10;
    // }else{
    //     if(digit % 10 < num % 10){
    //         digit = (digit-digit%10 + num%10)*10 + digit%10;
    //     }else{
    //         digit = digit*10 + num%10;
    //     }
    //     num = num / 10;
    // }

    // if(digit1 < num % 10){ // 4 < 35->5 
    //     digit = digit + (num % 10)*100;
    //     digit1 = num % 10;
    //     num = num / 10;
    // }else{
    //     if(digit % 10 < num % 10){
    //         digit = (digit-digit%10 + num%10)*10 + digit%10;
    //     }else{
    //         digit = digit*10 + num%10;
    //     }
    //     num = num / 10;
        
    // }
    
    // if(digit1 < num % 10){ // 0 < 3524->4 
    //     digit = digit + (num % 10)*100;
    //     digit1 = num % 10;
    //     num = num / 10;
    // }else{
    //     if(digit % 10 < num % 10){
    //         digit = (digit-digit%10 + num%10)*10 + digit%10;
    //     }else{
    //         digit = digit*10 + num%10;
    //     }
    //     num = num / 10;
    // }

    int lgdgt=0, seclgdgt=0, secsmdgt=0, smdgt=0;

    lgdgt = num%10;
    seclgdgt = (num/10)%10;
    secsmdgt = (num/100)%10;
    smdgt = (num/1000)%10;

    if (lgdgt < seclgdgt){
        int temp = lgdgt;
        lgdgt = seclgdgt;
        seclgdgt = temp;
    }
    if (lgdgt < secsmdgt){
        int temp = lgdgt;
        lgdgt = secsmdgt;
        secsmdgt = temp;
    }
    if (lgdgt < smdgt){
        int temp = lgdgt;
        lgdgt = smdgt;
        smdgt = temp;
    }

    if (seclgdgt < secsmdgt){
        int temp = seclgdgt;
        seclgdgt = secsmdgt;
        secsmdgt = temp;
    }

    if (seclgdgt < smdgt){
        int temp = seclgdgt;
        seclgdgt = smdgt;
        smdgt = temp;
    }

    if (secsmdgt < smdgt){
        int temp = secsmdgt;
        secsmdgt = smdgt;
        smdgt = temp;
    }
    
    
    int lgNum= lgdgt*1000 + seclgdgt*100 + secsmdgt*10 + smdgt; 
    int smNum= lgdgt + seclgdgt*10 + secsmdgt*100 + smdgt*1000;
    
    cout<<endl<<"largest Number: "<<lgNum<<endl;
    cout<<"smallest Number: "<<smNum<<endl;
    cout<<"Difference: "<<lgNum-smNum<<endl;
    
}

// int smallestPossibleNumber(int num){

// }

// void kaprekarRoutine(int lgNum, int smNum){
//     cout<<"\nLargest Possible Number: "<<lgNum<<endl;
//     cout<<"Smallest Possible Number: "<<smNum<<endl;
//     cout<<"Difference: "<<lgNum-smNum;
// }


int main(){
    int number = 0;
    cout<<"Enter a 4 digit Number: ";
    cin>>number;

    // int lrgPossNum = largestPossibleNumber(number);
    // int smlPossNum = smallestPossibleNumber(number);
    kaprekarRoutine(number);

    return 0;
}