#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "vector.hpp"

TEST_CASE("pushBack() and operator[]")
{
    Vector<int> v;
    v.pushBack(10);
    v.pushBack(20);
    v.pushBack(30);
    v.pushBack(40);
    v.pushBack(50);
    v.pushBack(60);
    v.pushBack(70);
    v.pushBack(80);
    v.pushBack(90);
    REQUIRE(v[3] == 40);
    REQUIRE(v[8] == 90);
    v[3] = 100;
    REQUIRE(v[3] == 100);
}

TEST_CASE("capacity changing")
{
    Vector<int> v;
    REQUIRE(v.size() == 0);
    // Having to hardcode the initial capacity here seems like
    // a nightmare for code maintainability.
    REQUIRE(v.capacity() == 8);

    v.pushBack(10);
    v.pushBack(20);
    v.pushBack(30);
    v.pushBack(40);
    v.pushBack(50);
    v.pushBack(60);
    v.pushBack(70);
    v.pushBack(80);
    REQUIRE(v.size() == 8);
    REQUIRE(v.capacity() == 8);

    v.pushBack(90);
    REQUIRE(v.size() == 9);
    REQUIRE(v.capacity() == 16);
}

TEST_CASE("at() bounds checking")
{
    Vector<std::string> v;
    v.pushBack("aaa");
    v.pushBack("bbbb");
    REQUIRE_NOTHROW(v.at(0));
    REQUIRE_NOTHROW(v.at(1));
    REQUIRE_THROWS_AS(v.at(2), std::out_of_range);
}
