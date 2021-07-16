#include<bits/stdc++.h>
using namespace std;
// check ith bit
int checkBit(int n, int i){
    return (n & (1<<i));  
}

// flip ith bit
int flipBit(int n, int i){
    return (n ^ (1<<i));
}

// check odd even
bool checkOddEven(int n){
    return (n&1);
}

// check power of 2
bool powOf2(int n){
    return (n & n-1);
}

// clear all bits from LSB
int clearBitLSB(int n, int i){
    int m = ~(1<<(i+1) -1);
    return n&m;
}

// clear all bits from MSB
int clearBitMSB(int n, int i){
    return n&((1<<i) -1);
}

// set ith bit
int setBit(int n, int i){
    return n | (1<<i);
}

// unset ith bit
int unsetBit(int n, int i){
    return n & ~(1 << (i));
}

// find first set bit
int findFirstSetBit(int n){
    return n & (~(n-1));
}

// turn off first set bit
int turnOffBit(int n){
    return n & n-1;
}