#include <bits/stdc++.h>
using namespace std;

int main()
{
    //LOWER TRIANGLE:
    int i, j;
    for(i=5; i>0; i--){
        for(j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
//UPPER TRIANGLE:
    int x, y;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <=x; y++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
