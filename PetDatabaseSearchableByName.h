#ifndef PETDATABASESEARCHABLEBYNAME_H
#define PETDATABASESEARCHABLEBYNAME_H

#include "Pet.h"
#include <vector>
#include <iostream>
using namespace::std;
#include"PetDatabaseSearchable"

class PetDatabaseSearchableByName : public PetDatabaseSearchable{
protected:
    string query;
public:
    PetDatabaseSearchableByName(vector<Pet*>& v){
        petVector=v;
    }
    
    virtual unsigned int getSize() const{
        return pet_vector.size();
    }
    virtual int compareAt(int i) const{
        if (query == (*pet_vector[i]).name){
            return 1;
        }
        if (query < (*pet_vector[i]).name){
            return 2;
        }
        return 3;
    }
    
    void setQuery(int q){
        query = q;
    }
};

#endif /* PETDATABASESEARCHABLEBYNAME_H */

