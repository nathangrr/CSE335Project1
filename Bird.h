
#ifndef BIRD_H
#define BIRD_H

#include "Pet.h"
#include<iostream>
#include<iomanip>
using std::setw;
using namespace::std;

class Bird : public Pet{
private:
    bool nocturnal;

public:
    // Constructor
    Bird(string n,string t,double p, double w, bool no){
        name = n;
        type = t;
        weight = w;
        price = p;
        nocturnal = no;
    }
    
    // Destructor
    virtual ~Bird(){}
    
    // Copy Constructor
    Bird(const Bird& b){
        if (this != &b){
            name = b.name;
            type = b.type;
            weight = b.weight;
            price = b.price;
            nocturnal = b.nocturnal;
        }
    }
    
    // Assignment Operator
    Bird& operator=(const Bird& b){
        if(this != &b){
            name = b.name;
            type = b.type;
            weight = b.weight;
            price = b.price;
            nocturnal = b.nocturnal;
        }
        return *this;
    }
    
    // Print
    virtual void print(){
        cout << "Name:" << setw(10) << name << setw(10) <<
                "Type:" << setw(10) << type << setw(10) <<
                "Weight:" << setw(4) << weight << setw(10) <<
                "Price:" << setw(10) << left << price << setw(10) <<
                "Nocturnal:" << boolalpha << setw(12) << nocturnal << endl;
     }
    
    void SetNocturnal(bool n){
        nocturnal = n;
    }
    

};

#endif /* BIRD_H */

