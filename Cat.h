
#ifndef CAT_H
#define CAT_H

#include "Pet.h"
#include<iostream>
#include<iomanip>
using namespace::std;

class Cat : public Pet{
private:
    bool fluffy;

public:
    // Constructor
    Cat(string n,string t,double p, double w, bool f){
        name = n;
        type = t;
        weight = w;
        price = p;
        fluffy = f;
    }
    
    // Destructor
    virtual ~Cat(){}
    
    // Copy Constructor
    Cat(const Cat& c){
        if (this != &c){
            name = c.name;
            type = c.type;
            weight = c.weight;
            price = c.price;
            fluffy = c.fluffy;
        }
    }
    
    // Assignment Operator
    Cat& operator=(const Cat& c){
        if(this != &c){
            name = c.name;
            type = c.type;
            weight = c.weight;
            price = c.price;
            fluffy = c.fluffy;
        }
        return *this;
    }
    
    // Print
    virtual void print(){
        cout << "Name:" << setw(10) << name << setw(10) <<
                "Type:" << setw(10) << type << setw(10) <<
                "Weight:" << setw(4) << weight << setw(10) <<
                "Price:" << setw(10) << left << price << setw(10) <<
                "Fluffy:" << boolalpha << setw(12) << fluffy << endl;
    }
    
    // Setter
    void SetFluffy(bool f){
        fluffy = f;
    }
    

};

#endif /* CAT_H */