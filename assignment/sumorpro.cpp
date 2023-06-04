#include <bits/stdc++.h>
using namespace std;

void check(int n, int s)
{
  int sum = 0;
  int pro = 1;
  if (s == 1)
  {
    for (int i = 1; i <= n; i++)
    {
      sum = sum + i;
    }
    cout << sum << endl;
  }
  else if (s == 2)
  {
    for (int i = 1; i <= n; i++)
    {
      pro = pro * i;
    }
    cout << pro;
  }
}

void checkn(int n, int s)
{
  int sum = 0;
  int pro = 1;
  if (s == 1)
  {
    for (int i = 1; i <= n; i++)
    {
      sum = sum + i;
    }
    cout << sum << endl;
  }
  else if (s == 2)
  {
    for (int i = 1; i <= n; i++)
    {
      pro = pro * i;
    }
    cout << pro;
  }
}



int main()
{

  int n, s;
  cin >> n >> s;
  check(n, s);

  int b, v;
  cin >> b >> v;
  checkn(b, v);
  return 0;
}


// to get solution in less that 20ms:(question from codingninja);
// long long int sumOrProduct(long long int n, long long int q)
// {
// 	 if(q==1){
// 		 return int((n*(n+1))/2);
// 	 }
// 	 else if(q==2){
// 		 long long int pro=1;
// 		 for(int i=1; i<=n;i++){
//              pro = (pro * i)%(int(pow(10,9))+7);
//         }
// 		return pro;
// 	 }
// }
