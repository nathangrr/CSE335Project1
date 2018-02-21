#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <cstdlib>
#include<iostream>
using namespace std;
#include "PetDatabaseSearchable.h"
#include"Pet.h"

class BinarySearch{
public:
    Pet search(PetDatabaseSearchable* pds){
        int left = 0;
        int right = (*pds).getSize() - 1;
        while (left <= right){
            int middle = (left+right)/2;
            if ((*pds).compareAt(middle) == 1){
                return middle;
            }
            else if ((*pds).compareAt(middle) == 2){
                right = middle - 1;
            }
            else{
                left = middle + 1;
            }
            
        }
        return -1;
    }
    
};


#endif /* BINARYSEARCH_H */


