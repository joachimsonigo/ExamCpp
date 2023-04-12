//
// Created by Joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_CHAIR_H
#define EXAMSONIGO_CHAIR_H
#include <iostream>
#include "furniture.h"
#include <string>

using namespace std;

class chair:public Furniture{

public:
    chair();
    virtual void disp();
    string get_type();
    double getprice();
    virtual ~chair(){};
};
chair::chair() {
    int t;
    cout << "Which chair model would you like?" << endl;
    do {
        line();
        cout << "1. fixed chair" << endl;
        cout << "2. folding chair" << endl;
        cout << "3. desk chair" << endl;
        line();
        cout<<"choice : ";
        cin >> t;
    } while (t < 1 || t > 3);
    type = t;
}
string chair::get_type() {
    if (type == 1)
        return ("fixed chair");
    if (type ==2)
        return ("folding chair");
    if (type == 3)
        return ("desk chair");
}

void chair::disp() {line();cout<<"It's a chair"<<endl;line();cout<<"type : " << get_type()<<endl;cout<<"Price : "<<getprice()<<endl;line();}
double chair::getprice() {
    if (type == 1)
        return 20;
    else
        if (type == 2)
        return 30;
    else if (type == 3)
            return 80;
}
#endif //EXAMSONIGO_CHAIR_H
