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
    rectangular();
    void disp();
    double getprice();
};


rectangular::rectangular(){
    int t;
    cout<<"What is your rectangular table's height?"<<endl;
    do {
        cout << "1. low" << endl;
        cout << "2. medium" << endl;
        cout << "3. high" << endl;
        cin >> t;
    } while (t < 1 || t > 3);
    type =t;
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
