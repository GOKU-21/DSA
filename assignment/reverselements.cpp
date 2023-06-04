//to reverse the array from a specified index;


#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m;
    
      cin >> n >> m;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }

      for (int i = 0; i <= m; i++)
      {
         cout << arr[i] << " ";
      }

      for (int i = n - 1; i >= (m + 1); i--)
      {
         cout << arr[i] << " ";
      }
}
