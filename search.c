/* Author RobertG111 */

#include "search.h"
#include <stdlib.h>
#include <stdio.h>

int BinarySearch(int target, const int *list, int size){

    int lower = 0, mid;
    int upper = size;

    while(1){

        if(upper < lower || upper == lower){
            return -1;
        }

        mid = (lower + (upper - lower) / 2);

        if(list[mid] == target){
            return target;
        }
        if(list[mid] < target){
            lower = mid + 1;
        }if(list[mid] > target){
            upper = mid;
        }
    }
}