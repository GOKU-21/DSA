#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n ;
  cin >> n;
  int rows = 2 * n - 1;
  int columns = 2 * n - 1;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
       
      int num = n - min(min(i, rows - i - 1), min(j, columns - j - 1));

      cout << num << " ";
    }
    cout << endl;
  }
}
