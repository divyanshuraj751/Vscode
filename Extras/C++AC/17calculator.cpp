#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    cout<<"Enter n1\n";
    cin>>n1;
    cout<<"Enter n2\n";
    cin>>n2;
    char op;
    cout << "Input an operator\n";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "Worng input";
    }
    return 0;
}