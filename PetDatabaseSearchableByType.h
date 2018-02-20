#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define PETDATABASESEARCHABLEBYTYPE_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include"PetdatabaseSearchable.h"

class PetDatabaseSearchableByType : public PetDatabaseSearchable{
protected:
    vector<Pet*> pet_vector;
    string query;
public:
    virtual unsigned int getSize() const{
        return pet_vector.size();
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
    
    void setQuery(int q){
        query = q;
    }
};

#endif /* PETDATABASESEARCHABLEBYTYPE_H */


