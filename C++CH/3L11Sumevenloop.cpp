#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;

  for (int i = 2; i <= 2 * n; i++)
  {
    if (i % 2 == 0)
    {
      sum = sum + i;
    }
  }
  cout<<sum<<endl;
}