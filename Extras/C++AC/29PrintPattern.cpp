#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Half Pyramid using numbers\n";
    cout << "Enter the numbers of rows\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout << endl;
    }
    return 0;
}