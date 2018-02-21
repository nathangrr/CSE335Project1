#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define PETDATABASESEARCHABLEBYWEIGHT_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include "PetDatabaseSearchable.h"
#include "PetDatabaseSortableByWeight.h"

class PetDatabaseSearchableByWeight : public PetDatabaseSearchable{
protected:
    double query;
public:
    PetDatabaseSearchableByWeight(PetDatabaseSortableByWeight* v){
        pet_vector=v->petVector;
    }
    
    virtual unsigned int getSize() const{
        return pet_vector.size();
    }
    virtual int compareAt(int i) const{
        if (query == (*pet_vector[i]).weight){
            return 1;
        }
        if (query < (*pet_vector[i]).weight){
            return 2;
        }
        return 3;
    }
    
    void setQuery(double q){
        query = q;
    }
};


#endif /* PETDATABASESEARCHABLEBYWEIGHT_H */
