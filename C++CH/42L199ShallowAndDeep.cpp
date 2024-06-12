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
    //COPY CONSTRUCTOR Deep
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        
        cout<<"copy constructor called"<<endl;
        this->health = temp.health<<endl;
        this->level = temp.level;
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

    void setName(char name[]) {
        strcpy(this->name,name);
    }
};

int main() {
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[4] = "Tony";
    hero1.setName(name);
    hero1.print();
}