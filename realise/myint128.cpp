#include "myint128.h"
#include <cstdio>
#include <algorithm>
#include <ctype.h>

__int128_t int128::read(){
    __int128_t x,f = 1;
    fflush(stdin);
    char ch = getchar();

    while(!isdigit(ch)&&ch!='-') ch = getchar();
    if(ch=='-') f = -1 , ch = getchar();
    while(isdigit(ch)) x = x*10 + ch - '0', ch = getchar();
    this->x = x*f;
    return x*f;
}

void int128::print(__int128_t x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) print(x/10);
    putchar( x % 10 + '0');
} 

void int128::show(){
    print(this->x);
}

int128 int128::operator+(int128& a){
    int128 x;
    x.x = this->x + a.x;
    return x;
}

int128 int128::operator-(int128& a){
    int128 x;
    x.x = this->x - a.x;
    return x;
}

int128 int128::operator*(int128& a){
    int128 x;
    x.x = this->x * a.x;
    return x;
}

int128 int128::operator/(int128& a){
    int128 x;
    x.x = this->x / a.x;
    return x;
}

