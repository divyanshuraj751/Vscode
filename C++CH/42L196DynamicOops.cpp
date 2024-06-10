#include <iostream>
using namespace std;

class Hero {
    //properties
    public:
    char level;

    private:
    int health;
    public:
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
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level "<<a.level<<endl;
    cout<<" Health "<<a.getHealth()<<endl;

    //dynamically allocation

    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;

    cout<<"Level is "<<b->level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;
}