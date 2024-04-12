#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of digits" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the digits" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    //for (int i = 0; i < n; i++)
    //{
        for (int j = 0; j < n; j++)
        {
            ans = 10 * ans + arr[j];
        }
        //break;
    //}
    cout << ans << endl;
}