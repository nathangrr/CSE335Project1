#include "BubbleSort.h"
#include "PetDatabaseSortable.h"

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

class BubbleSortIncreasing : public BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* pds, int i, int j){
        return !pds->smaller(i,j);
    }
};


#endif /* BUBBLESORTINCREASING_H */
