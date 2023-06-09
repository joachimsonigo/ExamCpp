//
// Created by joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_FURNITURE_H
#define EXAMSONIGO_FURNITURE_H
#include <iostream>
#include <string>
using namespace std;

class Furniture {
protected:
    int type;

public:
    Furniture(int =1);
    virtual int gettype(){return type;}
    virtual string get_type() = 0;
    virtual void disp() = 0; // pure virtual function
    virtual ~Furniture() {};
    virtual void add_drawers(int);
    virtual void remove_drawers(int);
    virtual double getprice() ;
};
Furniture::Furniture(int t){type = t;}

void Furniture::disp(){cout<<"It's a furniture of type : "<<type<<endl;}

void line(){cout<<"---------------------------------"<<endl;}
#endif //EXAMSONIGO_FURNITURE_H
