#include "vector.hpp"

#include <iostream>

int main()
{
    Vector<int> v;
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    v.pushBack(10);
    v.pushBack(20);
    v.pushBack(30);
    v.pushBack(40);
    v.pushBack(50);
    v.pushBack(60);
    v.pushBack(70);
    v.pushBack(80);
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    std::cout << v[3] << '\n';
    v.pushBack(90);
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    std::cout << v[3] << '\n';
    v[3] = 100;
    std::cout << v[3] << '\n';
}
