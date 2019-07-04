#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>

class Person;
std::istream &read(std::istream &, Person &);
std::ostream &print(std::ostream &, Person &);

class Person{
    // friends
    friend std::istream &read(std::istream &, Person &);
    friend std::ostream &print(std::ostream &, Person &);

private:
    std::string name;
    std::string address;

public:
    Person() = default;
    Person(const std::string &name, const std::string &address)
        : name(name), address(address)
    {
    }
    Person(std::istream &is){
        read(is, *this);
    }

    std::string get_name() const;
    std::string get_address() const;
};

std::istream &read(std::istream &is, Person &person){
    is >>  person.name >> person.address;

    return is;
}

std::ostream &print(std::ostream &os, Person &person){
    os << person.get_name() << " " << person.get_address() << std::endl;

    return os;
}

std::string Person::get_name() const{
    return name;
}
std::string Person::get_address() const{
    return address;
}

#endif // PERSON_H_INCLUDED
