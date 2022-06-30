#include "threads/fp.h"
#include <stdio.h>
#define f (1 << 14)

real
int_to_real(int x)
{
    return x * f;
}

int
real_to_int_rounded_to_zero(real x)
{
    return x / f;
}

int
real_to_int_rounded_to_nearest(real x)
{
    if (x >= 0)
    {
        return (x + f / 2) / f;
    }
    else
    {
        return (x - f / 2) / f;
    }
}

real
add_real_to_real(real x, real y)
{
    return x + y;
}

real
sub_real_from_real(real x, real y)
{
    return x - y;
}

real
add_real_to_int(real x, int y)
{
    return x + (y * f);
}

real
sub_real_from_int(real x, int y)
{
    return x - (y * f);
}

real
mul_real_by_real(real x, real y)
{
    return (((int64_t)x) * y) / f;
}

real
mul_real_by_int(real x, int y)
{
    return x * y;
}

real
div_real_by_real(real x, real y) // returns real x / real y
{
    return (((int64_t)x) * f) / y;
}

real
div_real_by_int(real x, int y) // returns real x / int y
{
    return x / y;
};