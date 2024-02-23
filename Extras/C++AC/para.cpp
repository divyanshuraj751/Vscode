#include <iostream>
using namespace std;

int main()
{

  int number,spaces;
  cin >> number;

  int row = 1;

  int counter = 1;
  while (row <= number)
  {
    // Printing First triangle.
    int first = number - row + 1;
    int count = 1;
    while (first)
    {
      cout << count;
      count++;
      first--;
    }

    // Printing half stars
    int halfLeftStars = row - 1;
    while (halfLeftStars)
    {
      cout << "*";
      spaces--;
    }
    // Printing 2nd Half stars.
    int stars2 = row - 1;
    while (stars2)
    {
      cout << "*";
      stars2--;
    }
    // Printing 3rd Triangle
    int tri2 = number - row + 1;
    while (tri2)
    {
      cout << tri2;
      tri2--;
    }

    cout << endl;
    row++;
  }
  return 0;
}