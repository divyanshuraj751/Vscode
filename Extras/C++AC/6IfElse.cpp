#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int Money;
    cin>>Money;
    if (Money > 5000)
    {
        if (Money > 10000)
        {
            cout << "RoadTrip\n";
        }
        else
        {
            cout << "Shopping\n";
        }
    }
    else if (Money < 1000)
    {
        cout << "Person2\n";
    }
    else
    {
        cout << "Person3\n";
    }
    return 0;
}