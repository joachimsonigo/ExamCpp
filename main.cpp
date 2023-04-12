#include <iostream>
#include "furniture.h"
#include "table.h"
#include "round.h"
#include "rectangular.h"
#include "chair.h"
#include "desk.h"
using namespace std;


int main() {
    Furniture * M1 = new chair;
    Furniture * M2 = new rectangular;
    Furniture * M3 = new round;
    Furniture * M4 = new desk;

    M1->disp();
    M2->disp();
    M3->disp();
    M4->disp();

    delete M1;
    delete M2;
    delete M3;
    delete M4;


    return 0;
}
