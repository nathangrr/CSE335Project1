
#ifndef FISH_H
#define FISH_H

#include "Pet.h"
#include<iostream>
#include<iomanip>
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
        cout << "Name:" << setw(10) << name << setw(10) <<
                "Type:" << setw(10) << type << setw(10) <<
                "Weight:" << setw(4) << weight << setw(10) <<
                "Price:" << setw(10) << left << price << setw(10) <<
                "WaterType:" << setw(12) << WaterType << endl;
    }
    
    void SetEnvironment(string w){
        WaterType = w;
    }
    

};

#endif /* FISH_H */

