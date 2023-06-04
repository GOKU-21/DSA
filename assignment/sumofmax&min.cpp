#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        int sum = arr[0] + arr[n - 1];
        cout << sum;
    }
    return 0;
}
