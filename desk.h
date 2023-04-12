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
    desk();
    virtual void disp();
    double getprice();
    void remove_drawers(int);
    void add_drawers(int);
    virtual ~desk(){};
};

desk::desk() : rectangular(true) {
    int d;

    do {
        cout << "How many drawers would you like? (min: 1 and max: 6)" << endl;
        cin >> d;
    } while (d < 1 || d > 6);

    nb_drawers = d;
}



void desk::disp() {
    line();
    cout<<"It's a Table"<<endl;
    line();
    cout<<"Type : " << get_type()<<endl;
    cout<<"Model : Rectangular desk special"<<endl;
    cout<<"Drawers : "<<nb_drawers<<endl;
    cout<<"Table price : "<<getprice()-15*nb_drawers<<endl;
    cout<<"Drawers price : "<<15*nb_drawers<<endl;
    line();
    cout<<"Total price : "<<getprice()<<endl;
    line();
}


double desk::getprice() {
    if (type == 1)
        return 120 + 15*nb_drawers;
    else
        if (type == 2)
            return 140 + 15*nb_drawers;
        else if (type == 3)
            return 160 + 15*nb_drawers;
}

void desk::remove_drawers(int n) {
    if (nb_drawers - n < 1){
        cout<<"You can't remove more drawers than you have and you need at least one drawer !\nYou now only have one drawer,which is the minimum."<<endl;
        nb_drawers= 1;}
    else
        nb_drawers -= n;
}
void desk::add_drawers(int n) {
    if (nb_drawers + n > 6) {
        cout << "You can't have more than 6 drawers !\nYou now have the max number of drawers which is 6" << endl;
        nb_drawers= 6;
    }
    else
        nb_drawers += n;
}
#endif //EXAMSONIGO_DESK_H
