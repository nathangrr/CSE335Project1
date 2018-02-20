#ifndef PETDATABASESORTABLEBYNAME_H
#define PETDATABASESORTABLEBYNAME_H

#include "PetDataBaseSortable.h"
#include "Pet.h"


class PetDatabaseSortableByName : public PetDatabaseSortable{
public:
    
    PetDatabaseSortableByName(vector<Pet*>& v){
        petVector=v;
    }
  
    virtual bool smaller(int i,int j){
        if(petVector[i]->name<petVector[j]->name){
            return false;
        }else{
            return true;
        }
    }
    

};

#endif /* PETDATABASESORTABLEBYNAME_H */