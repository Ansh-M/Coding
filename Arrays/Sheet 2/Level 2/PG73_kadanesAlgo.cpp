#include <iostream>
using namespace std;

void maxSumSubArray(int size)
{
    int arr[size];
    cout << "\nEnter Array Elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nSum of Sub Array with Max Sum: ";
    if (size <= 0)
        cout << "0";
    else
    {
        int sum = 0, maxSum = 0;
        bool flag = false;
        int index1 = 0, index2 = 0;

        maxSum = arr[0];
        sum = arr[0];
        for (int i = 1; i < size; i++){
            
            if (sum < 0) sum = arr[i];
            else{
                sum += arr[i];
                if (maxSum < sum) maxSum = sum;
            }
        }
        
        cout << maxSum;
    }
}

int main()
{
    int size = 0;
    cout << "Enter Array Size: ";
    cin >> size;

    maxSumSubArray(size);
    return 0;
}

