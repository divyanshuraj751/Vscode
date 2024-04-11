#include <iostream>
#include <string>
using namespace std;
string addStrings(string num1, string num2)
{
    int ans = 0, ans1 = 0;
    for (int i = 0; i < num1.size(); i++)
    {
        ans = ans * 10 + num1[i];
    }
    for (int i = 0; i < num2.size(); i++)
    {
        ans1 = ans1 * 10 + num2[i];
    }
    int answer = ans + ans1;
    string ans4;
    for (int i = 0; i < ans4.size(); i++)
    {
        ans4[i] = answer % 10;
        answer / 10;
        cout<<answer;
    }
    
    return ans4;
}

int main() {
    string num1;
    cin>>num1;

    string num2;
    cin>>num2;

    cout<<addStrings(num1,num2);
    return 0;
}