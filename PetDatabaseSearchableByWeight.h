#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define PETDATABASESEARCHABLEBYWEIGHT_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include "PetDatabaseSearchable.h"

class PetDatabaseSearchableByWeight : public PetDatabaseSearchable{
protected:
    vector<Pet*> pet_vector;
    double query;
public:
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
    
    void setQuery(int q){
        query = q;
    }
};


#endif /* PETDATABASESEARCHABLEBYWEIGHT_H */
