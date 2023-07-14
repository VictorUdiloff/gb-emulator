#include "cpu.cpp"
#include <iostream>
using namespace std;


/*
load 13 to bc
increment bc
increment bc
decrement bc

instruction byte1 byte2 byte3
0x00000000
*/
int op[maxnumberinstructions] = {0x01AC4000,0x04000000,0x05000000};


int main(){
    cpu cpu1;
    cpu1.boot();
    cpu1.execute(op);
    cout << cpu1.printt();
    return 0;
}