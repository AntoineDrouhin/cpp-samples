// variable/pointers.cpp

#include <cstdio>
using namespace std;

int main(int argc, char ** argv) {

    int x = 1;
    int y = x;

    printf("The value of x is : %d\n", x);
    printf("The value of y is : %d\n", y);

    printf("y += 1\n");
    y += 1;

    printf("The value of x is : %d\n", x);
    printf("The value of y is : %d\n", y);


    int * xaddr = &x;
    int * yaddr = &y;

    printf("The address of x is : %p\n", xaddr);
    printf("The address of y is : %p\n", yaddr);

    printf("*yaddr = 10;\n");
    *yaddr = 10;

    printf("The value of *yaddr is : %d\n", *yaddr);
    printf("The value of y is : %d\n", y);

}