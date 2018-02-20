#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "PetDatabaseSortable.h"

class BubbleSort{
public:
    void sort(PetDatabaseSortable* pds){
        bool sorted = false;
        int n=pds->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(pds, i-1,i)==true){
                    pds->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    
    virtual bool needSwap(PetDatabaseSortable* pds,int i,int j);

};
#endif /* BUBBLESORT_H */

