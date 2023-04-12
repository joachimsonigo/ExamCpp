//
// Created by Joachim Sonigo on 4/12/2023.
//

#ifndef EXAMSONIGO_CLIENT_H
#define EXAMSONIGO_CLIENT_H
#include <vector>
#include <iostream>
#include "furniture.h"
#include "desk.h"
#include <fstream>
#include <sstream>
using namespace std;
class client {
protected:
    vector<Furniture*> m_furniture;
public:
    client(){};
    ~client(){};
    void add();
    void disp();
    void pop();
    void edit();
    double totprice();
    double averageprice();
    void write();
};

void client::add() {
    int t,c,d;
    do {
        line();
        cout << "1. Add a chair" << endl;
        cout << "2. Add a table" << endl;
        cout << "3. Exit" << endl;
        line();
        cout<<"choice : ";
        cin >> t;
    } while (t < 1 || t > 3);
    if (t == 1)
        m_furniture.push_back(new chair);
    if (t == 2){
        do {
            line();
            cout<< "Which table shape would you like?" << endl;
            line();
            cout << "1. rectangular" << endl;
            cout << "2. round" << endl;
            line();
            cin >> c;
        }while (c < 1 || c > 2);
    if (c==1){
        do {
            line();
            cout<<"Would you like a regular table or a desk?"<<endl;
            line();
            cout << "1. regular table" << endl;
            cout << "2. desk" << endl;
            line();
            cin >> d;
        } while (d < 1 || d > 2);
        if (d == 1)
            m_furniture.push_back(new rectangular);
        else
            m_furniture.push_back(new desk);
    }
        if (c==2)
            m_furniture.push_back(new round);
    }
    if (t == 3)
        return;

}
void client::pop() {
    int index;
    cout<<"What's the index of the furniture you want to remove from your list?"<<endl;
    cin>>index;
    m_furniture.erase(m_furniture.begin() + index-1);
}
void client::disp() {
    for (int i = 0; i < m_furniture.size(); i++) {
        m_furniture[i]->disp();
    }
    cout<<"------------------------------------"<<endl;
    cout<<"Total price : "<<totprice()<<endl;
    cout<<"Average price : "<<averageprice()<<endl;
    cout<<"------------------------------------"<<endl;
}
void client::edit() {
    int index,k;
    do {
        cout<<"What's the index of the furniture you want to edit?"<<endl;
        cin>>index;
    } while (index < 1 || index > m_furniture.size());
    do {
        cout<<"Would you like to remove or add drawers?"<<endl;
        cout<<"1. Add"<<endl;
        cout<<"2. Remove"<<endl;
        cin>>k;
    }while (k < 1 || k > 2);
        int n;
        cout<<"How many drawers would you like to add/remove?"<<endl;
        cin>>n;
    if (k == 1)
        m_furniture[index-1]->add_drawers(n);
    else
        m_furniture[index-1]->remove_drawers(n);
}

double client::totprice() {
    int tot =0;
    for (int i = 0; i < size(m_furniture); ++i) {
        tot+=m_furniture[i]->getprice();
    }
    return tot;
}
double client::averageprice() {
    int tot =0;
    for (int i = 0; i < size(m_furniture); ++i) {
        tot+=m_furniture[i]->getprice();
    }
    return (tot/size(m_furniture));
}

void client::write() {
    ofstream outfile("furniture.csv");
    if (!outfile) {
        cerr << "Error opening output file" << endl;
        return;
    }
    outfile << "Furniture Type, Attribute, Price" << endl;
    for (int i = 0; i < m_furniture.size(); i++) {
        outfile << m_furniture[i]->gettype() << ", ";
        outfile << m_furniture[i]->get_type() << ", ";
        outfile << m_furniture[i]->getprice() << endl;
    }
    outfile.close();
    cout << "Furniture data written to furniture.csv" << endl;
}
#endif //EXAMSONIGO_CLIENT_H
