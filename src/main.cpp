#include "myint128.h"
#include <cstdio>

int main(){
    int128 a , b , c;
    a.read();
    b.read();
    c = a * b;

    putchar('\n');
    c.show();

    putchar('\n');

    // c.show();
    
}