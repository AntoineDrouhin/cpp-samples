// basicMaths/main.cpp

/**
 * 
 * A Statement express some action to be carried aout. It doesn't return a value.
 * An expression is anything that returns a value.
 * An expression is a statement. ("Expression Statement")
**/

#include <cstdio>
using namespace std;

int main( int argc, char ** argv)
{
    int x;
    x = 42;
    printf("x is %d\n", x);
    printf("x is %d\n", x = 42 * (12 + 14) );
    printf("x is %d\n", x = 42 * 12 + 14 );
    return 0;
}