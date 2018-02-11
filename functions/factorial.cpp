
#include <cstdio>
#include "factorial.h"
using namespace std;

int main(int argc, char ** argv){
    printf("%lu\n", factorial(5));
}


unsigned long factorial( unsigned long n) {
    if (n < 2) return 1;
    return factorial (n - 1) * n;
}
