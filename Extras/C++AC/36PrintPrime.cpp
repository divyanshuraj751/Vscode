#include <iostream>
using namespace std;

int Printprime(int a, int b);

int Printprime(int a, int b)
{
    int i;
    for (int num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if(i == num) {
            cout<<num<<endl;
        }
    }
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter min";
    cin >> a;
    cout << "Enter max";
    cin >> b;

    Printprime(a, b);
    return 0;
}
