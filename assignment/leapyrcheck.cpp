#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout << "enter a year: ";
    cin >> n;
    
    if( n%400==0 && n%4==0){/*If a Year is divisible by 400,
     then it will be considered as a Leap Century Year.
    */
        cout << "  a LEAP century";
    }
    else if(n%4==0){
        cout << " leap year ";

    }
    else {
        cout << "neither leap nor century ";
    }
    return 0;
}
