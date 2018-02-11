
#include <cstdio>
using namespace std;

unsigned long factorial( unsigned long n) {
    if (n < 2) return 1;
    return factorial (n - 1) * n;
}

int main(int argc, char ** argv){
    printf("%lu\n", factorial(10));
}

