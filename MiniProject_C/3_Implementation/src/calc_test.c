#include <calc_test.h>

int addition(int n1, int n2)
{
    return n1 + n2;
}

int subtraction(int n1, int n2)
{
    return n1 - n2;
}

int multiplication(int n1, int n2)
{
    return n1 * n2;
}

int division(int n1, int n2)
{
    if(0 == n2)
        return 0;
    else
        return n1 / n2;
}