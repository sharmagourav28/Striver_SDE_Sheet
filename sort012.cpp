#include <iostream>
using namespace std;
void sort012(int arr[], int n)
{
    int zero = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
        if (arr[i] == 2)
        {
            two++;
        }
    }
    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < zero + one; i++)
    {
        arr[i] = 1;
    }
    for (int i = zero + one; i < n; i++)
    {
        arr[i] = 2;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 0, 2, 0, 1, 0, 2, 1, 0, 2, 1, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, n);
    cout << endl;
    sort012(arr, n);
    printarray(arr, n);
    return 0;
}