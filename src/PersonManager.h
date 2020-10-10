//
// Created by Steph on 9/10/2020.
//

#ifndef LAB_07_PERSONMANAGER_H
#define LAB_07_PERSONMANAGER_H
#include"Person.h"
#include<vector>


class PersonManager
{

private:
  vector<Person*> personList;


public:
 void insertarPersona(Person *);

};


#endif //LAB_07_PERSONMANAGER_H
