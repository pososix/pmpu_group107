#include <iostream>
#include <cmath>

int recFib(int i)
{
    if (!i)
    {
        return i;
    }
    else if (i == 1)
    {
        return i;
    }
    else
    {
        return recFib(i - 1) + recFib(i - 2);
    }
}
