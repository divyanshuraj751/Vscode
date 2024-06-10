#include <iostream>
using namespace std;

class Hero {
    //properties
    public:
    char level;

    private:
    int health;
    public:

    Hero() {
        cout<<"Constructor Called "<<endl;
    }

    //Parameterised Constructor
    Hero(int health) {
        cout<<"this ->"<<this<<endl;
        this -> health = health;
    }

    Hero(int health,char level) {
        this -> level = level;
        this ->health = health;
    }

    void print() {
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

};

int main() {
    //object created statically
    cout<<"Hi "<<endl;
    Hero ramesh(10);
    cout<<"Hello "<<endl;

    cout<<"Address of ramesh "<<&ramesh<<endl;
    ramesh.print();

    //dynamically
    Hero *h =new Hero(11);
    h->print();

    Hero temp(22,'B');
    return 0;
    temp.print();
}
