#include <iostream>
#include <string>
#include "Person.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

void codeSample1() {
    // standard out <arrow arrow> string <arrow arrow> standard end line
    cout << "Type your name" << endl;
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;
}

void codeSample2() {
    int i1 = 1;
    cout << "i1 = " << i1 << endl;
    int i2;
    i2 = 2;
    cout << "i2 = " << i2 << endl;
    int i3(3);
    cout << "i3 = " << i3 << endl;
    int i4{4};
    cout << "i4 = " << i4 << endl;

    double d1 = 2.2;
    double d2 = i1;
    int i5 = d1;
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "i5 = " << i5 << endl;

    char c1 = 'a';
    cout << "c1 = " << c1 << endl;

    bool flag = false;
    cout << "flag = " << flag << endl;

    flag = i1;
    cout << "flag = " << flag << endl;

    flag = d1;
    cout << "flag = " << flag << endl;

    auto a1 = 1;
    auto a2 = static_cast<int>(2.2);
    cout << "a2 = " << a2 << endl;
    auto a3 = 'c';
    auto a4 = "s";
    auto a6 = 3L;
    auto a7 = 1'000'000'000;
    auto a8 = 0XFF; //255
    auto a9 = 0B111; //7
}

void codeSample3() {
    Person p1("Denis","Murphy");
    //Person p2;
    cout << p1.getName();
}

int main() {
    codeSample1();
    codeSample2();
    codeSample3();
    return 0;
}