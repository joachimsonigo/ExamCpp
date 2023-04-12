//
// Created by Joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_RECTANGULAR_H
#define EXAMSONIGO_RECTANGULAR_H
#include <iostream>
#include "table.h"
using namespace std;

class rectangular: public table{
public:
    rectangular(bool is_desk=0);
    virtual void disp();
    double getprice();
    virtual ~rectangular(){};

};


rectangular::rectangular(bool is_desk) {
    int t;
    if (is_desk) {
        do {
            cout<<"What is your rectangular desk's height?"<<endl;
            cout << "1. medium" << endl;
            cout << "2. high" << endl;
            line();
            cin >> t;
        } while (t < 1 || t > 2);
    } else {
        do {
            cout<<"What is your rectangular table's height?"<<endl;
            line();
            cout << "1. low" << endl;
            cout << "2. medium" << endl;
            cout << "3. high" << endl;
            line();
            cin >> t;
        } while (t < 1 || t > 3);
    }
    type = t;
}

void rectangular::disp() {
    line();
    cout<<"It's a Table"<<endl;
    line();
    cout<<"Type : " << get_type()<<endl;
    cout<<"Model : Rectangular"<<endl;
    cout<<"Price : "<<getprice()<<endl;
    line();
}

double rectangular::getprice() {
    if (type == 1)
        return 120;
    else
        if (type == 2)
            return 140;
        else if (type == 3)
            return 160;
}

#endif //EXAMSONIGO_RECTANGULAR_H
