//
// Created by Steph on 8/10/2020.
//

#include "Person.h"

Person::Person() {}

Person::Person(const string &name, const string &id, int age) : name(name), id(id), age(age) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

string Person::toString()
{
    stringstream out;

    out<<"Nombre: "<<name<<"\n";
    out<<"Edad: "<<age<<"\n";
    out<<"ID: "<<id<<"\n";
    out.str();



}


Person::~Person() {}


