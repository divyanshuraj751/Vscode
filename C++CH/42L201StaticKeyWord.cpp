#include <iostream>

using namespace std;

class Hero{
   public:
    char level;

    private:
    int health;
    public:
    char *name;
    static int timeToComplete;
    Hero() {
        cout<<"Default Constructor Called "<<endl;
        name = new char[100];
    }

    //Parameterised Constructor
    Hero(int health) {
        cout<<"this ->"<<this<<endl;
        this -> health = health;
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

    static int random() {
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main() {
    //cout<<Hero::timeToComplete <<endl;
    
    cout<<Hero::random()<<endl;
    //Not Recommended
    /*Hero a;
    cout<<a.timeToComplete<<endl;*/
}