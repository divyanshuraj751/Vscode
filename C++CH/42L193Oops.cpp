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
    //creation of object
    Hero ramesh;
    cout<<"size of Ramesh "<<sizeof(ramesh)<<endl;
    ramesh.setHealth(70);
    //ramesh.health = 70;
    ramesh.level = 'A';
    cout<<"Health is: "<<ramesh.getHealth() << endl;
    cout<<"Level is "<<ramesh.level<<endl;

    cout<<" size "<<sizeof(ramesh) <<endl;
    return 0;
}