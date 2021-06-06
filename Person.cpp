#include "Person.h"

Person::Person(std::string firstName, std::string lastName) :
        firstName(firstName),
        lastName(lastName) {
}

std::string Person::getName() {
    return firstName + " " + lastName;
}