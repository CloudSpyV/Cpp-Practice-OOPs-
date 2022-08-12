#include <iostream>
using namespace std;

class Dog {

private:
    char* name;

public:
    Dog(char* name) {
        this->name = name;
        cout << this->name << " the dog has been born." << endl;
    }

    ~Dog() {
        cout << this->name << " has unfortunately passed away." << endl;
    }

    void bark() {
        cout << "Woof!" << endl;
    }
};

int main(int argc, char const* argv[])
{
    Dog* brian = new Dog("Brain");

    brian->bark();
    brian->bark();
    brian->bark();

    delete brian;

    return 0;
}
