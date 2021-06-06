#include <string>

class Person {

private:
    std::string firstName;
    std::string lastName;

public:
    Person(std::string firstName, std::string lastName);

    Person() = default;

    std::string getName();

};