#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define PETDATABASESEARCHABLEBYPRICE_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include "PetDatabaseSearchable.h"
#include "PetDatabaseSortableByPrice.h"

class PetDatabaseSearchableByPrice : public PetDatabaseSearchable{
protected:
    double query;
public:
    PetDatabaseSearchableByPrice(PetDatabaseSortableByPrice* v){
        pet_vector=v->petVector;
    }
    
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
    
    void setQuery(double q){
        query = q;
    }
};

#endif /* PETDATABASESEARCHABLEBYPRICE_H */
