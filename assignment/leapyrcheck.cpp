 #include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout << "enter a year: ";
    cin >> n;
    
    if( n%400==0 && n%100==0){/*If a Year is divisible by 400,
     then it will be considered as a Leap Century Year.
    */
        cout << "  a LEAP century";
    }
    else if(n%4==0 && n%100!=0){
        cout << " leap year ";

    }
    else {
        cout << "not a leap year ";
    }
    return 0;
}
