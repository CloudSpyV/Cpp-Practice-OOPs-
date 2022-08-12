#include <iostream>

inline int add(int a, int b) {
    return a + b;
}

int main(int argc, char const* argv[])
{
    std::cout << "3 + 4 is " << add(3, 4);
    return 0;
}
