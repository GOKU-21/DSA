#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	float a , b , c , s , area;
	cin >> a >> b >> c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout << area;
	return 0;
}
