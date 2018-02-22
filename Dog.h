
#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include<iostream>
#include<iomanip>
using namespace::std;

class Dog : public Pet{
private:
    string category;

public:
    // Constructor
    Dog(string n,string t,double p, double w, string c){
        name = n;
        type = t;
        weight = w;
        price = p;
        category = c;
    }
    
    // Destructor
    virtual ~Dog(){}
    
    // Copy Constructor
    Dog(const Dog& d){
        if (this != &d){
            name = d.name;
            type = d.type;
            weight = d.weight;
            price = d.price;
            category = d.category;
        }
    }
    
    // Assignment Operator
    Dog& operator=(const Dog& d){
        if(this != &d){
            name = d.name;
            type = d.type;
            weight = d.weight;
            price = d.price;
            category = d.category;
        }
        return *this;
        
    }
    
    // Print
    virtual void print(){
        cout << "Name:" << setw(10) << name << setw(10) <<
                "Type:" << setw(10) << type << setw(10) <<
                "Weight:" << setw(4) << weight << setw(10) <<
                "Price:" << setw(10) << left << price << setw(10) <<
                "Category:" << setw(12) << category << endl;
    }
    
    void SetCategory(string c){
        category = c;
    }
    
  
};

#endif /* DOG_H */

