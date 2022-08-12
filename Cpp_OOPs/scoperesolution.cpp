#include <iostream>
using namespace std;

class Foo {
public:
    Foo() {
        cout << "Foo object constructed." << endl;
    }

    ~Foo();
    void say();
};

// Destructor defined outside class using scope resolution
Foo::~Foo() {
    cout << "Foo object destroyed." << endl;
}

void Foo::say() {
    cout << "No" << endl;
}

int main(int argc, char const* argv[])
{
    Foo f = Foo();

    f.say();
    f.say();

    return 0;
}
