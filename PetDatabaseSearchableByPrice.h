#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define PETDATABASESEARCHABLEBYPRICE_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include"PetDatabaseSearchable.h"

class PetDatabaseSearchableByPrice : public PetDatabaseSearchable{
protected:
    vector<Pet*> pet_vector;
    double query;
public:
    virtual unsigned int getSize() const{
        return pet_vector.size();
    }
    virtual int compareAt(int i) const{
        if (query == (*pet_vector[i]).price){
            return 1;
        }
        if (query < (*pet_vector[i]).price){
            return 2;
        }
        return 3;
    }
    
    void setQuery(int q){
        query = q;
    }
};

#endif /* PETDATABASESEARCHABLEBYPRICE_H */
