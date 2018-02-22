
#ifndef FISH_H
#define FISH_H

#include "Pet.h"
#include<iostream>
using namespace::std;

class Fish : public Pet{
private:
    string WaterType;

public:
    // Constructor
    Fish(string n,string t,double p, double w, string wa){
        name = n;
        type = t;
        weight = w;
        price = p;
        WaterType = wa;
    }
    
    // Destructor
    virtual ~Fish(){}
    
    // Copy Constructor
    Fish(const Fish& f){
        if (this != &f){
            name = f.name;
            type = f.type;
            weight = f.weight;
            price = f.price;
            WaterType = f.WaterType;
        }
    }
    
    // Assignment Operator
    Fish& operator=(const Fish& f){
        if(this != &f){
            name = f.name;
            type = f.type;
            weight = f.weight;
            price = f.price;
            WaterType = f.WaterType;
        }
        return *this;
    }
    
    // Print
    virtual void print(){
        cout << "Name:   " <<  name << " ";
        cout << "Type:   " << type << " ";
        cout << "Weight:   "<< weight << " ";
        cout << "Price:   " << price << " ";
        cout << "WaterType:   " << WaterType << endl;
    }
    
    void SetEnvironment(string w){
        WaterType = w;
    }
    

};

#endif /* FISH_H */

