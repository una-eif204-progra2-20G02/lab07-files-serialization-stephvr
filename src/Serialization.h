//
// Created by Steph on 9/10/2020.
//

#ifndef LAB_07_SERIALIZATION_H
#define LAB_07_SERIALIZATION_H
#include<../lib/nlohmann/json.hpp>
#include<fstream>
#include"PersonManager.h"

using json= nlohmann::json;
using namespace std;

class Serialization
{

protected:
    json jsonPeople;
    string peopleSerialize;

public:
    void serialize(Person*personList);
    void deserialize(Person*personList);


};


#endif //LAB_07_SERIALIZATION_H
