// variable/reference.cpp

#include <cstdio>
using namespace std;

int main (int argc, char ** argv) {

    int x = 7;
    int *ip = &x;

    // You can't define a reference without initializing it
    int &y = x;

    printf("The valie of x is %d\n", x);
    printf("The valie of y is %d\n", y);
    printf("The valie of *ip is %d\n", *ip);

    printf("\n");

    x = 42;
    printf("The valie of x is %d\n", x);
    printf("The valie of y is %d\n", y);
    printf("The valie of *ip is %d\n", *ip);

    printf("\n");

    y = 84;
    printf("The valie of x is %d\n", x);
    printf("The valie of y is %d\n", y);
    printf("The valie of *ip is %d\n", *ip);

    printf("\n");

    int z = 149;
    ip = &z;
    printf("The valie of x is %d\n", x);
    printf("The valie of y is %d\n", y);
    printf("The valie of *ip is %d\n", *ip);
    printf("The valie of z is %d\n", z);

    return 0;
}