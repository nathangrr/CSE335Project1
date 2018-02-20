#include "Pet.h"
#include <vector>
#include <iostream>
using std::cout;
using std::endl;

#ifndef PETDATABASESORTABLE_H
#define PETDATABASESORTABLE_H

class PetDatabaseSortable{
protected:
    vector<Pet*> petVector;
public:
    unsigned int getSize(){
        return petVector.size();
    };
    
    void swap(int i, int  j){
       Pet* temp = petVector[i];
       petVector[i]=petVector[j];
       petVector[j] = temp;
    }
    
    virtual bool smaller(int i, int j) = 0;
    
    void DisplayRecords(){
        for(int i=0;i<petVector.size();i++){
            petVector[i]->print();
        }
    }
};


#endif /* PETDATABASESORTABLE_H */

