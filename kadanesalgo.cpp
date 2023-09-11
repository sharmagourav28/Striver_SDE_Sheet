#include <bits/stdc++.h>
using namespace std;
// int kadanesalgo(int arr[], int n)
// {
// // 0(n^3)
//     for (int i = 0; i < n; i++)
//     {
//         int maxi = INT_MIN;
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k < j; k++)
//             {
//                 sum = sum + arr[k];
//             }
//             maxi = max(sum, maxi);
//         }
//     }
// return maxi;
// }

// int kadanesalgo(int arr[], int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum = sum + arr[j];
//         }
//         maxi = max(sum, maxi);
//     }
//     return maxi;
// }

int kadanesalgo(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = kadanesalgo(arr, n);
    cout << ans << endl;
}