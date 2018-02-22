#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define PETDATABASESEARCHABLEBYTYPE_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include "PetdatabaseSearchable.h"
#include "PetDatabaseSortableByType.h"

class PetDatabaseSearchableByType : public PetDatabaseSearchable{
protected:
    string query;
public:
    PetDatabaseSearchableByType(PetDatabaseSortableByType* v){
        pet_vector=v->petVector;
    }
    
    virtual int compareAt(int i) const{
        if (query == (*pet_vector[i]).type){
            return 1;
        }
        if (query < (*pet_vector[i]).type){
            return 2;
        }
        return 3;
    }
    
    void setQuery(string q){
        query = q;
    }
};

#endif /* PETDATABASESEARCHABLEBYTYPE_H */


