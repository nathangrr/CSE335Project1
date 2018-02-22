
#ifndef BIRD_H
#define BIRD_H

#include "Pet.h"
#include<iostream>
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
        cout << "Name:   " <<  name << " ";
        cout << "Type:   " << type << " ";
        cout << "Weight:   "<< weight << " ";
        cout << "Price:   " << price << " ";
        cout << "Nocturnal:   " << boolalpha << nocturnal << endl;
     }
    
    void SetNocturnal(bool n){
        nocturnal = n;
    }
    

};

#endif /* BIRD_H */

