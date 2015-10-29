#include <iostream>
#include <vector>

using namespace std;

class Talker {
public:
    virtual void SaySomething() {
        cout << "I am the generic Talker" << endl;
    }
};


class Hello : public Talker {
public:
    void SaySomething() {
        cout << "Hello" << endl;
    }
};

class World : public Talker {
public:
    void SaySomething() {
        cout << "World" << endl;
    }
};


int main() {
    Talker t;
    t.SaySomething();
    Hello h;
    h.SaySomething();
    World w;
    w.SaySomething();

    //Now lets have some polymorphism !!!
    cout << "Polymorphic Hello World" << endl;

    vector<Talker *> talkers(2);
    talkers.at(0) = new Hello();
    talkers.at(1) = new World();

    for (int i = 0; i < talkers.size(); i++) {
        talkers.at(i)->SaySomething();
    }

}