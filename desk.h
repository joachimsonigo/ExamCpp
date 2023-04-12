//
// Created by Joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_DESK_H
#define EXAMSONIGO_DESK_H
#include <iostream>
#include "rectangular.h"
using namespace std;

class desk: public rectangular {
private:
    int nb_drawers;
public:
    desk(int=1, int=1);
    void disp();
    double getprice();
};
void desk::disp() {cout<<"It's a desk of height : "<<type<<endl;cout<<"Price : "<<getprice()<<endl;}
double desk::getprice() {
    if (type == 1)
        return 120 + 15*nb_drawers;
    else
        if (type == 2)
            return 140 + 15*nb_drawers;
        else if (type == 3)
            return 160 + 15*nb_drawers;
}

#endif //EXAMSONIGO_DESK_H
