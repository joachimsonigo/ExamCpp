//
// Created by Joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_TABLE_H
#define EXAMSONIGO_TABLE_H
#include <iostream>
#include "furniture.h"
#include <string>
using namespace std;


class table :public Furniture {
public:
    table(int = 1);
    virtual void disp();
    string get_type();
    virtual ~table(){};
};
table::table(int t): Furniture(t) {}

string table::get_type() {
    if (type == 1)
        return ("low");
    if (type ==2)
        return ("medium");
    if (type == 3)
        return ("high");
}

void table::disp() {cout<<"It's a table of height : "<<type<<endl;}


#endif //EXAMSONIGO_TABLE_H
