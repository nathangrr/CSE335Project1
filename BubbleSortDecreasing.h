#include "BubbleSort.h"
#include "PetDatabaseSortable.h"

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

class BubbleSortDecreasing : public BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* pds, int i, int j){
        return pds->smaller(i,j);
    }
};


#endif /* BUBBLESORTDECREASING_H */

