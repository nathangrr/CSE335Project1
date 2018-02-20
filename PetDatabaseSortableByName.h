#include "PetDataBaseSortable.h"
#include "Pet.h"



#ifndef PETDATABASESORTABLEBYNAME_H
#define PETDATABASESORTABLEBYNAME_H

class PetDatabaseSortableByName : public PetDatabaseSortable{
public:
    
    PetDatabaseSortableByName(vector<Pet*>& v){
        petVector=v;
    }
  
    virtual bool smaller(int i,int j){
        if(petVector[i]->name<petVector[j]->name){
            return true;
        }else{
            return false;
        }
    }
    

};

#endif /* PETDATABASESORTABLEBYNAME_H */