// to find the value stored in the targeted index;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Size of array:" << n;
    int A[n];
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == target)
        {
            ans = i;
        }
    }
    cout << "target:" << ans;

    return 0;
}
