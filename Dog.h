
#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include<iostream>
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
        cout << "Name:   " <<  name << " ";
        cout << "Type:   " << type << " ";
        cout << "Weight:   "<< weight << " ";
        cout << "Price:   " << price << " ";
        cout << "Category:   " << category << endl;
    }
    
    void SetCategory(string c){
        category = c;
    }
    
  
};

#endif /* DOG_H */

