//Error only in vscode
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to reverse\n";
    cin >> n;

    int reverse;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl;
    return 0;
}