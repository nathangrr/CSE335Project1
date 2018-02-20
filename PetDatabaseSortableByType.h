#ifndef PETDATABASESORTABLEBYTYPE_H
#define PETDATABASESORTABLEBYTYPE_H

#include "PetDataBaseSortable.h"
#include "Pet.h"


class PetDatabaseSortableByType : public PetDatabaseSortable{
public:
    
    PetDatabaseSortableByType(vector<Pet*>& v){
        petVector=v;
    }
  
    virtual bool smaller(int i,int j){
        if(petVector[i]->type<petVector[j]->type){
            return false;
        }else{
            return true;
        }
    }
    

};

#endif /* PETDATABASESORTABLEBYTYPE_H */

