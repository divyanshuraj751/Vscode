#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> q;

    q.push("Mango");
    q.push("Banana");
    q.push("Apple");

    cout<<"Size before pop "<<q.size()<<endl;
    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First Elment "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}