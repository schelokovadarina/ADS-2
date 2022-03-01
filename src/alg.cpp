// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>

double pown(double value, uint16_t n) {
return pow (value, n);
}
uint64_t fact(uint16_t n) {
if (n==0) 
return 1;
return n*fact(n-1);
}
double calcItem(double x, uint16_t n) {
double a=0;
a=pown(x,n)/fact(n);
return a;
}
double expn(double x, uint16_t count) {
double b=0;
while (count!=0) {
b=b+calcItem(x,count);
count--;
}
b+=1;
return b;
}
double sinn(double x, uint16_t count) {
double c=0;
while (count!=1) {
c=pow(-1, count-1)*calcItem(x,2*count-1);
count--; 
}
c+=x;
return c;
}
double cosn(double x, uint16_t count) {
double d=0;
while (count!=1) {
d=pow(-1,count-1)*calcItem(x,2*count-2);
count--;
}
d+=1;
return d;
}
