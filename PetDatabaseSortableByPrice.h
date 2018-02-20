#ifndef PETDATABASESORTABLEBYPRICE_H
#define PETDATABASESORTABLEBYPRICE_H

#include "PetDataBaseSortable.h"
#include "Pet.h"


class PetDatabaseSortableByPrice : public PetDatabaseSortable{
public:
    
    PetDatabaseSortableByPrice(vector<Pet*>& v){
        petVector=v;
    }
  
    virtual bool smaller(int i,int j){
        if(petVector[i]->price<petVector[j]->price){
            return false;
        }else{
            return true;
        }
    }
    

};

#endif /* PETDATABASESORTABLEBYPRICE_H */

