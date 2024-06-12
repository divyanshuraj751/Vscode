#include <iostream>
using namespace std;

class Hero{
   public:
    char level;

    private:
    int health;
    public:
    char *name;
    char level;
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
    //COPY CONSTRUCTOR
    Hero(Hero& temp) {
        cout<<"copy constructor called"<<endl;
        this->health = temp.health<<endl;
        this->level = temp.level;
    }
    void print() {
        cout<< "Health" << this->health <<endl;
        cout<< "level" << this->level <<endl;
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

    void setName(char name[]) {
        strcpy(this->name,name);
    }
};

int main() {
    Hero S(70,'C');
    S.print();
    //COPY CONSTRUCTOR
    Hero R(S);
    R.print();


}