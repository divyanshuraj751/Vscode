#include <iostream>
using namespace std;

void NoOfDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i] == arr[j] && i != j)
                {
                    cout << arr[i] << " ";
                    arr[j] = -1;
                    break;
                }
            }
        }
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    NoOfDuplicate(arr, size);

    return 0;
}