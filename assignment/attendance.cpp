

#include<bits/stdc++.h>
using namespace std;

int main(){
    float tc, ca, p;
    cout << " enter total classes attended: ";
    cin >> ca;
    cout << " enter total classes held: ";
    cin >> tc;
    p = (ca/tc)*100;



    if (p >= 75){
        cout << " eligible for exam";
    } 
    else {
        cout << " not eligible "<< endl;
        int x;
        cout << " enter 1 if any medical issue and 0 if not : ";
        cin >> x;

   if (x==1 && x!=0 ){
    cout << " allowance provided (due to medical issue)";
   }
   else {
    cout << "no medical issue ";
   }
    }
return 0;
}


