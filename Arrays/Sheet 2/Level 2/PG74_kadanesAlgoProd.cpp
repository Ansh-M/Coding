#include <iostream>
using namespace std;

void maxSumSubArray(int size)
{
    int arr[size];
    cout << "\nEnter Array Elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nProduct of Sub Array with Max Product: ";
    if (size <= 0)
        cout << "0";
    else
    {
        int prod = 0, maxProd = 0;
        bool flag = false;
        int index1 = 0, index2 = 0;

        maxProd = arr[0];
        prod = arr[0];
        for (int i = 1; i < size; i++){
            
            if (prod == 0) prod = arr[i];
            else{
                prod *= arr[i];
                if (maxProd < prod) maxProd = prod;
            }
        }
        
        cout << maxProd;
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

