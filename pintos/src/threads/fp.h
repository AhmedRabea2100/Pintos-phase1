#ifndef THREADS_FP_H
#define THREADS_FP_H
#include <stdint.h>
#define fixed_point 16


typedef int real;
int real_to_int_rounded_to_zero(real x);   
real add_real_to_real(real x, real y); 
real sub_real_from_real(real x, real y);
real add_real_to_int(real x, int y); 
real sub_real_from_int(real x, int y); // returns real x - int n
real mul_real_by_real(real x, real y ); 
real mul_real_by_int(real x, int y); 
real div_real_by_real(real x, real y); // returns real x /real y
real div_real_by_int(real x, int y) ;// returns real x / int n
real int_to_real(int x);
int real_to_int_rounded_to_nearest(real x);

#endif 