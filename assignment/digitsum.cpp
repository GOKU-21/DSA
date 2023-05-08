#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,r,sum=0;
    cin >> n;
    while(n>0){
        r = n%10;
        n = n/10;
     sum += r;
        cout << r << " ";
    }
cout << "sum = " << sum << endl;
}
