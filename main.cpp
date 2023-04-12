#include <iostream>
#include "furniture.h"
#include "table.h"
#include "round.h"
#include "rectangular.h"
#include "chair.h"
#include "desk.h"
#include "client.h"
using namespace std;


void menu(){
    int choice;
    client mf;
    do {
        do {
            cout<<"-----------------\n\tMenu\n-----------------"<<endl;
            cout<<"1-Add\n2-Show\n3-Delete\n4-Edit a Desk\n5-Exit"<<endl;
            cout<<"--------------"<<endl;
            cin>>choice;
        }while(choice<1 || choice > 5);
        if (choice ==1){
            mf.add();
            system("pause");
        }
        else
        if (choice == 2){
            mf.disp();
            system("pause");
        }
        else
        if (choice == 3){
            mf.disp();
            system("pause");
            mf.pop();
        }
        else
        if (choice == 4){
            mf.disp();
            system("pause");
            mf.edit();
        }
    }while(choice != 5);
    system("color 04");
    cout<<"Thank you for using this furniture menu!"<<endl;
    cout<<"This was created by Joachim Sonigo"<<endl;
}

int main() {
    system("color 0A");
    menu();
    return 0;
}
