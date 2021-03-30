#include "swap.hpp"

void swap(int& a,int& b){
    int c;
    c=a;
    a=b;
    b=c;
}