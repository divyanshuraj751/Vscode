#include <iostream>
#include <cmath>
using namespace std;

int check(int l, int b)
{
    int lb = l * l + b * b;
    int res = sqrt(lb);

    return res;
}

int main()
{
    int l, b, h;
    cout << "Enter three numbers\n";
    cin >> l >> b;
    cin>>h;
    if (h > l && h > b)
    {
        if (h == check(l, b))
        {
            cout << "Pythagorian Triplet\n";
        }
        else
        {
            cout << "Not a Pythogorian Triplet\n";
        }
    }
    else if (l > h && l > b)
    {
        if (l == check(h, b))
        {
            cout << "Pythagorian Triplet\n";
        }
        else
        {
            cout << "Not a Pythogorian Triplet\n";
        }
    }
    else if (b > l && b > h)
    {
        if (b == check(l, h))
        {
            cout << "Pythagorian Triplet\n";
        }
        else
        {
            cout << "Not a Pythogorian Triplet\n";
        }
    }
    return 0;
}