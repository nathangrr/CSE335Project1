#include "Pet.h"
#include <vector>
#include <iostream>
using std::cout;
using std::endl;

#ifndef PETDATABASESEARCHABLE_H
#define PETDATABASESEARCHABLE_H

class PetDatabaseSearchable{
protected:
    vector<Pet*> pet_vector;
public:
    virtual unsigned int getSize() const{
        return pet_vector.size();
    }
    virtual int compareAt(int) const = 0;
    
    Pet* getPet(int i) const{
        return pet_vector[i];
    }
};


#endif /* PETDATABASESEARCHABLE_H */

