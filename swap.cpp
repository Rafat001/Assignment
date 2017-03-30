#include <bits/stdc++.h>
using namespace std;
void swap (int & a, int & b)
{
int x;
x = a;
a = b;
b = x;
}
int main()
{
  int m, n;
  m = 6; n = 7;
  cout<<m<<"\n"<<n<<"\n"<<endl;
  swap (m, n);
 cout<<m<<"\n"<<n<<"\n"<<endl;

}
