#include "Pet.h"
#include <vector>
#include <iostream>
using std::cout;
using std::endl;

#ifndef PETDATABASESEARCHABLE_H
#define PETDATABASESEARCHABLE_H

class PetDatabaseSearchable{
public:
    virtual unsigned int getSize() const = 0;
    virtual int compareAt(int) const = 0;
    
    Pet getPet(Pet p) const{
        return p;
    }
};


#endif /* PETDATABASESEARCHABLE_H */

