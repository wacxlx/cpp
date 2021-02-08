#ifndef __MY_INT128_
#define __MY_INT128_

class int128{
private:
    __int128_t x = 0;
    void pt(__int128_t x);
public:
    void print(__int128_t x);
    void show();
    __int128_t read();
    int128 operator+ (int128& a);
    int128 operator- (int128& a);
    int128 operator* (int128& a);
    int128 operator/ (int128& a);
 };

 #endif