#include <iostream>
using namespace std;

class Human{
    public:
    int health;
    int weight;
    int height;
    
    private:
    int age;
    public:
    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight = w;
    }
};

class Male : protected Human {
    public:
    string color;

    void sleep() {
        cout<< "Male Sleeping "<<endl;
    }

    int getHeight() {
        return this->height;
    }
};

int main() {
    Male m1;
    cout<<m1.getHeight()<<endl;
}



