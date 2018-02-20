
#ifndef CAT_H
#define CAT_H

#include "Pet.h"
#include<iostream>
using namespace::std;

class Cat : public Pet{
private:
    bool fluffy;

public:
    // Constructor
    Cat(string n,string t,double w, double p, bool f){
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
        cout << "Name:   " <<  name << " ";
        cout << "Type:   " << type << " ";
        cout << "Weight:   "<< weight << " ";
        cout << "Price:   " << price << " ";
        cout << "Fluffy:   " << boolalpha << fluffy << endl;
    }
    
    // Setter
    void SetFluffy(bool f){
        fluffy = f;
    }
    

};

#endif /* CAT_H */