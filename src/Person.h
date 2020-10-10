//
// Created by Steph on 8/10/2020.
//

#ifndef LAB_07_PERSON_H
#define LAB_07_PERSON_H
#include<string>
#include<list>

using namespace std;
class Person {

private:
    string name;
    string id;
    int age;

public:
    Person();
    Person(const string &name, const string &id, int age);

    const string &getName() const;

    void setName(const string &name);

    const string &getId() const;

    void setId(const string &id);

    int getAge() const;

    void setAge(int age);

    virtual ~Person();


};

#endif //LAB_07_PERSON_H
