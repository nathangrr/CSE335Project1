
#ifndef PET_H
#define PET_H

#include<iostream>
using namespace::std;

class Pet{
protected:
    string name;
    string type;
    unsigned int weight;
    double price;
public:
    // Default Constructor
    Pet(){};
    
    // Constructor with Parameters
    Pet(string n,string t,double w, double p){
        name = n;
        type = t;
        weight = w; 
        price = p;
    }
    
    // Destructor
    virtual ~Pet(){}
    
    // Copy Constructor
    Pet(const Pet& p){
        if (this != &p){
            name = p.name;
            type = p.type;
            weight = p.weight;
            price = p.price;
        }
    }
    
    // Assignment Operator
    Pet& operator=(const Pet& p){
        if(this != &p){
            name = p.name;
            type = p.type;
            weight = p.weight;
            price = p.price;
        }
        return *this;
    }
    
    // Print
    virtual void print()=0;
    
    string GetName() const{
        return name;
    }
    
    string GetType() const{
        return type;
    }
    
    unsigned int GetWeight() const{
        return weight;
    }
    
    double GetPrice() const{
        return price;
    }
    
    // Setter
    void SetName(string n){
        name = n;
    }
    
    void SetType(string t){
        type = t;
    }
    
    void SetWeight(unsigned int w){
        weight = w;
    }
    
    void SetPrice(double p){
        price = p;
    }
    
};

#endif /* PET_H */

