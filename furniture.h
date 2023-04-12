//
// Created by joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_FURNITURE_H
#define EXAMSONIGO_FURNITURE_H
#include <iostream>
using namespace std;

class Furniture {
protected:
    int type;

public:
    Furniture(int =1);
    void disp();
};
Furniture::Furniture(int t){type = t;}

void Furniture::disp(){cout<<"It's a furniture of type : "<<type<<endl;}

void line(){cout<<"---------------------------------"<<endl;}
#endif //EXAMSONIGO_FURNITURE_H
