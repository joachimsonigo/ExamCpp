//
// Created by Joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_ROUND_H
#define EXAMSONIGO_ROUND_H
#include <iostream>
#include "table.h"

using namespace std;

class round: public table{
public:
    round();
    void disp();
    double getprice();
};
round::round() {
    int t;
    cout<<"What is your round table's height?"<<endl;
    line();
    do {
        cout << "1. low" << endl;
        cout << "2. medium" << endl;
        cout << "3. high" << endl;
        line();
        cin >> t;
    } while (t < 1 || t > 3);
    type =t;
}

void round::disp() {
    line();
    cout<<"It's a Table"<<endl;
    line();
    cout<<"Type : " << get_type()<<endl;
    cout<<"Model : Round"<<endl;
    cout<<"Price : "<<getprice()<<endl;
    line();
}

double round::getprice() {
    if (type == 1)
        return 180;
    if (type == 2)
        return 210;
    if (type == 3)
        return 240;
}

#endif //EXAMSONIGO_ROUND_H
