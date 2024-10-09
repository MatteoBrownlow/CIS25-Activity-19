#include <iostream>

void swap(int &x, int &y){
    int* xptr = &x;
    int* yptr = &y;
    int temp = x;
    *xptr = *yptr;
    *yptr = temp;
}
