#ifndef PETDATABASESORTABLEBYWEIGHT_H
#define PETDATABASESORTABLEBYWEIGHT_H

#include "PetDataBaseSortable.h"
#include "Pet.h"


class PetDatabaseSortableByWeight : public PetDatabaseSortable{
public:
    
    PetDatabaseSortableByWeight(vector<Pet*>& v){
        petVector=v;
    }
  
    virtual bool smaller(int i,int j){
        if(petVector[i]->weight<petVector[j]->weight){
            return false;
        }else{
            return true;
        }
    }
    

};

#endif /* PETDATABASESORTABLEBYWEIGHT_H */

