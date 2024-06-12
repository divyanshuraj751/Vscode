#include <iostream>
using namespace std;

class Hero{
    public:
    char level;

    private:
    int health;
    public:
    char *name;
    Hero() {
        cout<<"Default Constructor Called "<<endl;
        name = new char[100];
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
        cout<<endl;
        cout<<"[ Name :"<<this->name<<" , ";
        cout<< "Health : " << this->health <<" , ";
        cout<< "level" << this->level <<" ] ";
        cout<<endl;
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
    //destructor
    ~Hero() {
        cout<<"Destructor is called "<<endl;
    }
};

int main() {
    //static
    Hero a;

    //Dynamic
    Hero *b = new Hero();
    //manually destructor call
    delete b;

    return 0;
}